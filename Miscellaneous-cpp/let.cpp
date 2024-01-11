#include <iostream>
#include <string>
using namespace std;
bool getbit(int n,int pos)
{
    return ((n&(1<<pos)) != 0);
}
unsigned int setbit(int n,int pos,int val)
{
    return (n|(val<<pos));    
}
unsigned int eebabua(int n)
{
    int result = 0;
    for(int i = 0; i < 64; i++)
    {
        int g = getbit(n,i);
        cout<<g<<" ";
        // result = setbit(result,(63-i),g);
    }
    return result;
}
int main()
{
    unsigned int num;
    cin>>num;
    cout<<eebabua(num)<<endl;
    return 0;
}