#include <iostream>
using namespace std;
string movee(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = s.substr(1);
    if (ch == 'x')
    {
        return (ans + ch);
    }
    return (ch + ans);
}
int main()
{
    cout<<"xxxxabcxxxxxdxxxxxtexxxmxxx"<<endl;
    cout<<movee("xxxxabcxxxxxdxxxxxtexxxmxxx")<<endl;
    return 0;
}