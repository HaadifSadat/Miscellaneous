#include <iostream>
using namespace std;
int main()
{
    string s = "bbbbbbbbbbbbbbbbbbba";
    int a[26]={0};
    for(int i = 0 ; i < s.length() ; i++)
    {
        a[s[i] - 'a']++;
    }
    int mx = -1;     
    int mxe = 0;     
    for(int i = 0 ; i < 26 ; i++)
    {
        // cout<<a[i]<<" ";
        mx = max(mx,a[i]);
        if(mx == a[i]) mxe = i;
    }
    cout<<mx+1<<endl;
    cout<<char(mxe+'a')<<endl;
}