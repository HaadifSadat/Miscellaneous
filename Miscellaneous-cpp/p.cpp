#include <iostream>
using namespace std;

bool primesieve(int n, int ele)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    return !(prime[ele]);
}
unsigned int setBitNumber(unsigned int n)
{

    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    return (n >> 1);
}
unsigned int fbit(unsigned int j)
{
    unsigned int pos = 0;
    unsigned int n = setBitNumber(j);
    while (n)
    {
        n >>= 1;
        pos++;
    }
    return pos;
}
unsigned int revbit(unsigned int k)
{
    unsigned int x = 31 - fbit(k);
    unsigned int m = k << (x - 1);
    return (m);
}

int main()
{
    cout<<primesieve(50,7)<<endl;
    // cout << setBitNumber(2147483648) << endl;
    // cout << fbit(2147483648) << endl;
    // cout << revbit(2147483648) << endl;
    // unsigned int m = 98;
    // cout << sizeof(m)*8-1;
    return 0;
}
