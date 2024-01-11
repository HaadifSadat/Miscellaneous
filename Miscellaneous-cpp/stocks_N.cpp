#include <iostream>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int mpf(int a[],int n)
{
    int maxprofit = 0;
    int minsofar = a[0];

    for(int i = 0; i < n; i++)
    {
        minsofar = min(a[i],minsofar);
        int pr = a[i] - minsofar;
        maxprofit = max(maxprofit,pr);
    }
    return maxprofit;
}
int main()
{
    int a[] = {3,1,4,8,7,2,5};
    int n = sizeof(a)/sizeof(a[0]);
    std::cout<<mpf(a,n)<<"\n";
    return 0;
}