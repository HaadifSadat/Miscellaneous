#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // bool flag = 1;
    // if (n < 2)
    // {
    //     cout << "Not Prime";
    // }
    // else
    // {

    //     for (int i = 2; i * i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             cout << "Not Prime";
    //             flag = 0;

    //             break;
    //         }
    //     }
    //     if (flag == 1)
    //     {
    //         cout << "Prime";
    //     }
    // }
    
    int reverse = 0;
    int temp = n;
    while (n > 0)
    {
        int lastdig = n % 10;
        reverse += pow(lastdig, 3);
        n /= 10;
    }
    if (temp == reverse)
    {
        cout << "Amstrong num";
    }
    else
    {
        cout << "not amstrong ";
    }

    return 0;
}