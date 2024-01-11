#include <iostream>
using namespace std;

int prof(int *arr, int n)
{
    int pf = 0;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > *(arr + i - 1))
        {
            pf += (*(arr + i) - *(arr + i - 1));
        }
    }
    return pf;
}

int main()
{
    int arr[] = {5,2,6,1,4,7,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<prof(arr,n)<<endl;
    return 0;
}
