#include <iostream>
using namespace std;

void magic(int *arr,int s,int m,int e)
{
    int n1 = m-s+1;
    int n2 = e-m;

    int a[n1];
    int b[n2];

    for(int i = 0; i < n1;i++)
    {
        a[i] = arr[s+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[m+e+1];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            arr[i] = a[i];
            i++;
            k++;
        }
        if( b[j] < a[i])
        {
            arr[j] = b[j];
            j++;
            k++;
        }
    }
    while(i < n1)
    {
        arr[i] = a[i];
    }
    while(j < n2)
    {
        arr[j] = b[j];
    }
}

void merge(int arr[],int s,int e)
{
    if(s >= e)
    {
        return;
    }
    int mid = (s+e)/2;
    merge(arr,s,mid);
    merge(arr,mid+1,e);
    magic(arr,s,mid,e);
}

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n;i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}