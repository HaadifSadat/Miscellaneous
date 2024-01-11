#include <iostream>
int max(int a,int b)
{
    return (a > b)? a : b;
}
int main()
{
    int a[] = {3,5,1,7,4,9,3};

    int psf = 0,ansp = 0;
    for(int i = 0; i < 7;i++)
    {
        for (int j = 0; j < 7; j++)
        {
            psf = a[j]-a[i];
            ansp = max(ansp,psf); 
        }        
    }
    std::cout<<ansp<<std::endl;

    return 0;
}