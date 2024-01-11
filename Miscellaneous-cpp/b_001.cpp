#include <bits/stdc++.h>
using namespace std;

bool pairsum(int *arr,int n,int s)
{
    for(int i = 0; i < n-1;i++)
    {
        for(int j = 1;j < n; j++)
        {
            if(arr[i] + arr[j] == s)
            {
                cout<<i<<" "<<j<<endl;
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n = 10;
    int arr[n] = {2,4,7,11,14,16,20,21};
    int s = 31;
    cout<<pairsum(arr,n,s);
    return 0;
}