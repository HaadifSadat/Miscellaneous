#include <iostream>
using namespace std;

int main()
{
    int n,s;
    cin >> n >> s;

    int arr[n+1];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i = 0;
    int j = 0;
    int cur = 0;
    while(j < n && cur + arr[j] <= s)
    {
        cur += arr[j]; j++;
    }
    if(s == cur + arr[j])
    {
        cout<<i<<" "<<j<<endl;
    }
    while(j < n)
    {
        cur += arr[j];
        if(cur > s )
        {
            cur -= arr[i];
            i++;
        }
    }
    return 0;
}