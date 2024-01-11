#include <iostream>
#include <climits>
using namespace std;

/*-------------------------------------- max till i ----------------------------------------------------------
int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int mx = INT_MIN; //the least number which can be given or -19999999999999999
    for (int i = 0; i < n; i++)
    {
        mx = max(ar[i], mx);
        cout<<mx<<endl;
    }

    return 0;
}
*/
/*-------------------------------------subarrys and subsequences ----------------------------------
int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int curr = 0;
    for (int i = 0; i < n ; i++)
    {
        curr = 0;
        for (int j = i; j < n ; j++)
        {
            curr += ar[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}
*/
/*------------------------------------------Google kick start -------------------------------------------
int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;
    int pd = a[1] - a[0];
    int curr = 2;
    int j = 2;
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {

            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);

        j++;
    }

    cout << ans << endl;

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------------

*/
int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    ar[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > mx && ar[i] > ar[i + 1])
        {
            ans++;
        }
        mx = max(mx, ar[i]);
    }
    cout << ans << endl;

    return 0;
}