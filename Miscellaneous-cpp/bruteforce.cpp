#include <iostream>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
void bruteforce_nln_n()
{
    int arr[] = {5, 1, 4, 1, 1};
    int n = sizeof(arr) / sizeof(arr + 0);
    int a[] = {1, 1, 1, 4, 5};
    int ansctr = 0;
    int elm = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sofctr = 0;
        if (a[i] == a[i + 1])
        {
            ++sofctr;
        }
        if (sofctr > ansctr)
        {
            elm = a[i];
        }
        ansctr = sofctr;
    }
    cout<<elm;
}
void bruteforce_n2()
{
    int arr[] = {5, 1, 4, 1, 1};
    int n = sizeof(arr) / sizeof(arr + 0);

    int cans = 0;
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        int chck = 0;
        int ele = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                chck++;
                ele = arr[i];
            }
        }
        if (chck > cans)
        {
            idx = ele;
        }
        cans = chck;
    }
    cout << idx << " " << endl;
}

void hash()
{
    
}
int main()
{
    bruteforce_nln_n();
    bruteforce_n2();
    return 0;
}