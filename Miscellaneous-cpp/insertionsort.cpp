#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arry[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }

    for (int i = 1; i < n; i++)
    {

        int current = arry[i];
        int j = i - 1;

        while (arry[j] > current && j >= 0)
        {
            arry[j + 1] = arry[j];
            j = j - 1;
        }
        arry[j + 1] = current;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }
}