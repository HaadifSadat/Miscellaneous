#include <iostream>
using namespace std;
unsigned int num(unsigned int n)
{
    unsigned int n1 = n;
    int c = 0;
    while(n1)
    {
        n1 &= n1-1;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<num(n)<<endl;
}