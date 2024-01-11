#include <iostream>
using namespace std;
void recursive_keypad_call(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    char first_character = s[0];
    string code = keypad[first_character - '0'];
    string rest_of_string = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        recursive_keypad_call(rest_of_string, ans + code[i]);
    }
}
int main()
{
    recursive_keypad_call("23", "");
    return 0;
}