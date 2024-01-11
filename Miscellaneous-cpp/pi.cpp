#include <iostream>
using namespace std;
string rd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = rd(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}
int main()
{
    cout << rd("cccccccdddddddpooooooonnnnnn");
    return 0;
}