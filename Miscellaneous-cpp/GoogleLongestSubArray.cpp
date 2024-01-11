#include <iostream>
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
    int ans = 2;
    int cur = 2;
    int pd = a[1] - a[0];
    for (int i = 2; i < n; i++)
    {
        if (a[i] - a[i - 1] == pd)
        {
            cur++;
        }
        else
        {
            pd = a[i] - a[i - 1];
            cur = 2;
        }
        ans = max(ans,cur);
    }
    cout<<ans<<" ";

    return 0;
}