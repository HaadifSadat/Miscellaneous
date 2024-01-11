#include <iostream>
using namespace std;

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }
// int divisible (int n, int a, int b)
// {
//     int c1 = n/a;
//     int c2 = n/b;
//     int c3 = n/(a*b);
//     return (c1+c2-c3);
// }
int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}
int main()
{
    int a, b, n;
    cin >> a >> b;
    //cout<<divisible(n,a,b);
    cout << gcd(a, b);

    return 0;
}