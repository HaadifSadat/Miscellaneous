#include <iostream>
int max(int a,int b)
{
    return (a > b)? a : b;
}
void auxrr(int *arr,int n,int *a)
{
    arr[n-1] = a[n-1];
    for (int i = n-2; i > -1; i--)
    {
        arr[i] = max(a[i],arr[i+1]);
    }    
}
int main()
{
    int a[] = {3,1,4,8,7,2,5};

    int aux[7]={0};

    auxrr(aux,7,a);
    

    int m = 0;

    for (int i = 0; i < 7; i++)
    {
        int p = aux[i] - a[i] ;
        m = max(m,p);
    }
    std::cout<<m<<std::endl;
    
    return 0;
}