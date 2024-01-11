#include <iostream>
using namespace std;

void binn(int k)
{
    int binary = 0;

    while (k > 0)
    {
        int lastdig = k % 2;
        // binary = binary * 10 + lastdig;
        cout << lastdig;
        k /= 2;
    }
}
int main()
{
    int n;
    cin >> n;

    binn(n);

    return 0;
}