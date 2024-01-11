/*
The task is to complete the function convertToWave() which converts the given array to wave array.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ n ≤ 106
0 ≤ arr[i] ≤107

https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays
*/


#include <iostream>
using namespace std;

void convertowave(int n,int arr[])
{
    for (int i = 2; i < n; i+=2)
    {
        int temp = arr[i-1];
        arr[i-1] = arr[i-2];
        arr[i-2] = temp; 
    }
}
int main()
{
    int n = 6;
    int arr[n] = {2,4,7,8,9,10};
    convertowave(n+1,arr);
    for(int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}