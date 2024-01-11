#include <iostream>
using namespace std;
int setBit(int n, int pos)
{
    return (n & 1 << pos) != 0;
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    int tempxorsum = xorsum;
    int setbit = 0;
    int pos = -1;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }
    int newxorsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos))
        {
            newxorsum ^= arr[i];
        }
    }
    cout<<newxorsum<<endl;
    cout<<(tempxorsum ^ newxorsum)<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,7,2,1,3,4};
    unique(arr,10);
    return 0;
}