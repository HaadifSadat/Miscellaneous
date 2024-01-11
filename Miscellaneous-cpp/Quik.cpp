#include <iostream>
using namespace std;
// #define ONLINE_JUDGE
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partion(int arr[],int l,int r)
{
    int pv = arr[l];
    int i = l - 1;
    for(int j = l; j < r;j++)
    {
        if(arr[j] < pv) 
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}

void quiksort(int arr[],int l,int r)
{
    if(l < r)
    {
        int pv = partion(arr,l,r);
        quiksort(arr,l,pv-1);
        quiksort(arr,pv+1,r);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int count;
    cin>>count;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }


    quiksort(arr,0,count-1);

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }


    
    return 0;
}