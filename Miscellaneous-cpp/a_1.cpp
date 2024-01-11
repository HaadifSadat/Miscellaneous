#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1 ,2 ,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int mcsum = 0;
    for (int i = 0; i < n; i++)
    {
        int csum = 0;
        for(int j = i; j < n; j++)
        {
            csum += arr[j];
            if(csum > mcsum)
            {
                mcsum = csum;
            }
        }
    }
    cout<<mcsum<<endl;
}