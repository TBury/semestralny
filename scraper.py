from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.by import By
from selenium.common.exceptions import TimeoutException
import re

with open("query.dat", "r", encoding="utf-8") as f:
    query = f.readlines()
    start_city = query[0].replace(" ", "-").rstrip()
    end_city = query[1].replace(" ", "-").rstrip()
    date_and_time = query[2].replace(".", "-")
f.close()
options = Options()
options.headless = True
profile = webdriver.FirefoxProfile()
profile.set_preference("general.useragent.override", "e")
browser = webdriver.Firefox(profile, options=options)
browser.get(f"https://koleo.pl/rozklad-pkp/{start_city}/{end_city}/{date_and_time}/all/all")
try:
    myElem = WebDriverWait(browser, 2).until(EC.presence_of_element_located((By.CLASS_NAME, 'day-connections')))
    body = browser.page_source
    soup = BeautifulSoup(body, "html.parser")

    connections = soup.find_all("div", {'title': 'Połączenie'})
    for connection in connections:
        details = connection.text
        details = details.replace("\n", "")
        start_hour = re.findall("\d\d:\d\d", details)[0]
        end_hour = re.findall("\d\d:\d\d", details)[1]
        price = re.findall("\d\d,\d\d", details)[0]
        price = price.replace(",", ".")
        
        with open("connections.dat", mode="a") as f:
            f.write(start_city + ";" + end_city + ";" + start_hour + ";" + end_hour + ";" + price + "\n")
        f.close()

except TimeoutException:
    browser.quit()