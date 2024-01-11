#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Order of the matrix";
    cin >> n >> m;
    cout<<"Enter elements";
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int k ;
    cout<<"Search elements"<<endl;
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == k)
            {
              cout<<"index "<<i+1<<" "<<j+1<<endl;
              return 0;
            }
        
        }
        cout << endl;
    }
    cout<<" -1 "<<endl;
    return 0;
}