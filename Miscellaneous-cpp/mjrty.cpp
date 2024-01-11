#include <iostream>
using namespace std;
int mjele(int n, int arr[])
{
    int ansIdx = 0;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[ansIdx])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            ansIdx = i;
            count = 1;
        }
    }
    // return ansIdx;
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[ansIdx]==arr[i]) c++; 
    }
    if(c>n/2) cout<<arr[ansIdx]<<endl;
    else cout<<"Illa Kanno";
    return c;
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
    cout << mjele(n,arr) <<endl;
    return 0;

}