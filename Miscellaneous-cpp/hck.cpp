#include <iostream>
using namespace std;

typedef long long int ll;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int g = gcd(2,4);
    cout << g << endl;
    return 0;
}