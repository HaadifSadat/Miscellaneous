#include <iostream>
using namespace std;

int hammingDistance(int n1, int n2)
{
    int x = n1 ^ n2;
    int setBits = 0;

    while (x > 0)
    {
        setBits += x & 1;
        x >>= 1;
    }

    return setBits;
}

int hammingtance(int x, int y)
{
    int z = x + y;
    int index = 0;
    for (int i = 0; i < 31; i++)
    {
        if ((z & (1 << i)) != 0)
        {
            index += i;
        }
    }
    return index;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << hammingDistance(a, b) << endl;
    return 0;
}