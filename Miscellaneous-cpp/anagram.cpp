#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    if (s1.length() != s2.length())
    {
        cout << "not anagram" << endl;
        return 0;
    }
    int a[26];
    int b[26];
    for (int i = 0; i < 26; i++)
    {
        a[s1[i] - 'a']++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        b[s2[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    cout << "strings are anagrams";

    return 0;
}