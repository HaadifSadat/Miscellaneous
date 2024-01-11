#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();

    int mxlen = 0, curlen = 0;
    int i = 0;
    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (mxlen < curlen)
            {
                mxlen = curlen;
            }
            curlen = 0;
        }
        else
        curlen++;
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << mxlen << endl;

    return 0;
}