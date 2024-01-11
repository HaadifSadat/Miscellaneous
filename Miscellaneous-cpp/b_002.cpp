#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int rs,re,cs,ce;
    rs = 0;
    re = n-1;
    cs = 0;
    ce = m-1;
    while (rs <= re && cs <= ce)
    {
        for(int cl = cs; cl <= ce; cl++)
        {
            cout<<arr[rs][cl]<<" ";
        }
        rs++;
        for(int rl = rs; rl <= re; rl++)
        {
            cout<<arr[rl][ce]<<" ";
        }
        ce--;
        for(int cl = ce; cl >= cs; cl--)
        {
            cout<<arr[re][cl]<<" ";
        }
        re--;
        for(int rl = re; rl >= rs; rl--)
        {
            cout<<arr[rl][cs]<<" ";
        }
        cs++;
    }
    
    return 0;
}
