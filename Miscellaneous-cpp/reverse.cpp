#include <iostream>
#include <stdint.h>
using namespace std;
int reverse(int x)
{
    int temp;
    temp = x << 8;
    return temp;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;
}