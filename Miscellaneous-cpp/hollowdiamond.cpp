#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>> n;
    int spc = (2*n-1)/2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=spc ; j++)
        {
           cout<<"* ";
        }
        for (int j = 1; j <= 2*i -1; j++)
        {
            if (j==2*i-1 || j==1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
            
        }
        for (int j = 1; j <= spc; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        spc--;
        
        
    }
     
    for (int i = n; i >= 1; i--)
    {
      
        
     for (int j = 0; j <=spc ; j++)
        {
           cout<<"* ";
        }
        for (int j = 1; j <= 2*i -1; j++)
        {
            if (j==2*i-1 || j==1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
            
        }
        for (int j = 0 ; j <= spc; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        spc++;
    }
    return 0;
}

    

