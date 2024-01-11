#include <iostream>
#include <climits>
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
    int ar[N];

    for (int i = 0; i < N; i++)
    {
        ar[i] = -1;
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[a[i]] != -1)
        {
            mn = min(mn, ar[a[i]]);
        }
        else
        {
            ar[a[i]] = i;
        }
    }
    if (mn == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mn+1<<endl;
    }
    
    

    return 0;
}