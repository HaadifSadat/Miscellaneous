#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i = 0 ; i < n ;i++)
    {
        int c = 2;
        for(int j = 1; j < (n-i)+1 ; j++)
        {
            cout<<"1 ";
        }
        for(int k = 1; k <= i ; k++)
        {
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    return 0;
}