#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int cursum = 0;
    int mxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cursum += arr[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        mxsum = max(mxsum, cursum);
    }
    return mxsum;
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int wrapsum = 0;
    int nonwrapsum = 0;
    
    return 0;
}