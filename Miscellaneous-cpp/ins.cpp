#include <iostream>
using namespace std;

/* ----------------- | -------------------
    SORTED                  UNSORTED
*/

void inse(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = *(arr + i);
        int j = i - 1;
        for (; j > -1 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j+1] = temp; // j+1 because of j--
    }
}
int main()
{
    int arr[] = {8,4,1,5,9,2,4};
    inse(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}