#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 10;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    int j = 0;
    while (j < n && a[j] > -1)
    {
        check[a[j]] = true;
        j++;
    }
    for (int i = 0; i < N; i++)
    {
        if (check[i] == false)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}