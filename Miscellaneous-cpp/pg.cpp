#include <iostream>
using namespace std;
int locc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int rest = locc(arr, n, i + 1, key);
    if (arr[i] == key)
    {
        return i;
    }
    return rest;
}
int focc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return focc(arr, n, i + 1, key);
}
int main()
{
    int a[] = {2, 3, 79, 12, 34, 2, 96};
    cout << locc(a, 7, 1, 88) << endl;
    return 0;
}