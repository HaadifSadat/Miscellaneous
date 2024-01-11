#include <iostream>
using namespace std;
int repeatedNumber(const int *A, int n1)
{
    int ansIdx = 0;
    int count = 1;

    for (int i = 1; i < n1; i++)
    {
        (A[i] == A[ansIdx]) ? count++ : count--;
        if (count == 0)
        {
            ansIdx = i;
            count = 1;
        }
    }
    int c = 0;
    for (int i = 0; i < n1; i++)
    {
        if (A[i] == A[ansIdx])
            c++;
    }
    return (c > n1 / 3) ? A[ansIdx] : -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << repeatedNumber(arr, n) << endl;
    return 0;
}
