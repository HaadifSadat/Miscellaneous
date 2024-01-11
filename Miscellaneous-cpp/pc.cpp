#include <iostream>
#include <climits>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    int arr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        arr[str[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}