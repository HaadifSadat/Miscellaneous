#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 100;
    int TR[N];
    for (int i = 0; i < N; i++)
    {
        TR[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > -1)
        {
            TR[a[i]] = 1;
        }
    }
    for (int i = 0 ; i < N ; i++)
    {
        if(TR[i] == 0)
        {
            cout<<i<<endl;
            break ;
        }
    }

} // namespace
