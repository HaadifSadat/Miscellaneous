#include <iostream>
using namespace std;

// int linearsearch(int arry[], int k, int len)
// {

//     for (int i = 0; i < len; i++)
//     {
//         if (arry[i] == k)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int binarysearch(int array[], int k, int leng)
{
    int s = 0;
    int e = leng ;
    while (s <= e)
    {
        int mid = (e + s) / 2;
        if (array[mid] == k)
        {
            return mid;
        }
        else if (array[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        
    }
     return -1;
}
int main()
{
    int n;
    cout << "array size" << endl;
    cin >> n;
    cout << "enter elements" << endl;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    int key;
    cout << "search element" << endl;
    cin >> key;
    cout << binarysearch(ary, key, n) << endl;
//  cout << linearsearch(ary, key, n) << endl;

    return 0;
}
