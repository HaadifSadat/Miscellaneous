#include <iostream>
using namespace std;
bool check(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    bool rech = check(arr + 1, n - 1);
    return (rech && arr[1] > arr[0]);
}
int main()
{
    //int a[] = {6, 1, 3, 4, 3, 7, 89, 4};
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << check(a, 8) << endl;
    return 0;
}