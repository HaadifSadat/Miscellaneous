# include <iostream>
# include <climits>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    int N = 100;
    int test[N];
    for(int i = 0 ; i < N ; i++)
    {
        test[i] = -1;
    }
    int mi = INT_MAX;
    for(int i = 0 ; i < n ; i++)
    {
        if(test[a[i]] =! -1)
        {
            mi = min(mi,test[a[i]]);
        }
        else
        {
            test[a[i]] = i;
        }
    }
    // for(int i = 0; i < n ; i++)
    // {
    //     cout<<test[i]<<endl;
    // }
    cout<<mi<<endl;

}