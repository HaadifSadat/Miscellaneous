#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    // int i =0;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            break;
        }
        else
        {
          cout << "prime " << i << endl;
            
        }
        
    }

    return 0;
}
