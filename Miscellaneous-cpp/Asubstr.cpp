#include <iostream>
using namespace std;
void sb(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int n = ch;
    string ros = s.substr(1);
    sb(ros, ans);
    sb(ros, ans + ch);
    //sb(ros, ans + to_string(n));
}
int main()
{
    sb("ABC", "");
    return 0;
}