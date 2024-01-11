#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int org = n;
    int temp = 1;
    while (n > 0)
    {
        int lastdig = n % 10;
        temp += pow(lastdig, 3);
        n /= 10;
    }
    cout<<temp<<endl;
    cout<<org;
    if (org == temp)
    {
        cout << "Arm";
    }
    else
    {
        cout << "not";
    }

    return 0;
}