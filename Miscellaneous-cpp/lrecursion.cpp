#include <iostream>
using namespace std;
int tiling(int n)
{
    if(n == 1 || n == 0)
    {
        return n;
    }
    return tiling(n-1)+tiling(n-2);
}
int pairup(int n)
{
    // if(n == 1 || n == 0)
    // {
    //     return n;
    // }
    // return n*pairup(n-1)*pairup(n-2);
    return (n == 1 || n == 0 || n == 2)? n : pairup(n-1)+ (pairup(n-2) * (n-1));
}
int knapsack(int val[],int wt[],int n,int W)
{
    if(W==0 || n==0)
    {return 0;}
    if(wt[n-1]>W)
    {return knapsack(val,wt,n-1,W);}
    return max(knapsack(val,wt,n-1,W-wt[n-1]+val[n+1]),knapsack(val,wt,n-1,W));
}

int main()
{
    cout<<pairup(4)<<endl;
    return 0;
}