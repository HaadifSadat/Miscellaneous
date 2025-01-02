from curl_cffi import requests
from bs4 import BeautifulSoup
from rich import print
import pandas as pd

def fetch_data() -> pd.DataFrame:
    l1, l2 = list(), list()
    content = requests.get(url='https://cleartax.in/s/cost-inflation-index')
    soup = BeautifulSoup(content.text, 'lxml')

    for table in soup.find_all('tr'):
        td_elements = table.find_all('td')
        if len(td_elements) == 2:
            l1.append(td_elements[0].text.strip())
            l2.append(td_elements[1].text.strip())

    df = pd.DataFrame({
        'Year': l1[1:],
        'Cost Inflation Index (CII)': [int(x) for x in l2[1:]]
    })

    return df

df = fetch_data()
df['Cost Inflation Index (CII)'] = df['Cost Inflation Index (CII)'].astype(int)
df['Change since Base Year'] = df['Cost Inflation Index (CII)'].apply(
    lambda x: x / df['Cost Inflation Index (CII)'].iloc[0]
)

print(df)
