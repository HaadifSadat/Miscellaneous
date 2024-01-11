/*
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] ≤ 107

*/


#include <iostream>
using namespace std;
int kadane(int *arr, int n)
{
    int csum = 0, msum = 0,splc = 0;

    for (int i = 0; i < n; i++)
    {
        splc += *(arr+i);
        csum += *(arr + i);
        if (csum > msum)
        {
            msum = csum;
        }
        if (csum < 0)
        {
            csum = 0;
        }
    }
    // if(msum == 0)
    // {
    //     for(int i = 0; i < n; i++)
    //     {
    //         msum += arr[i];
    //     }
    // }
    return (msum < csum)? msum : splc;
}
int main()
{
    int arr[] = {5,-4,-2,6,-1};
    int Arr[] = {1,2,3,-2,5};
    int Arr2[] = {-1,-2,-3,-4};

    int n = sizeof(arr)/sizeof(arr+0);
    int n1 = sizeof(Arr)/sizeof(Arr+0);
    int n2 = sizeof(Arr2)/sizeof(Arr2);
    
    cout<<kadane(arr,n)<<endl;

    cout<<kadane(Arr,n1)<<endl;

    cout<<kadane(Arr2,n2)<<endl;
    return 0;
}