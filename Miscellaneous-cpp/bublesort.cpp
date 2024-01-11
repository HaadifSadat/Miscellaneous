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
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - i + 1; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                flag = false;
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
        if (flag)
        {
            break;
        }
    }
     for (int i = 0; i < n; i++)
     {
        cout<<arry[i]<<" ";
     }
     
}
