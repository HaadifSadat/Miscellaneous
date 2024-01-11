#include <iostream>
#include <climits>
using namespace std;
int main()
{
    string s = "aabcd";
    int a[26];
    for (int i = 0; i < 26; i++)
        a[i] = 0;

    for (int i = 0; i < s.size(); i++)
        a[s[i] - 'a']++;

    int ans = INT_MIN;
    char ele ;
    for (int i = 0; i < 26; i++)
       { ans = max(ans, a[i]);
         ele = a[i] +'a';
       }
    cout << ans << endl;
    cout << ele << endl;
    return 0;
}