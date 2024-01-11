#include <iostream>
using namespace std;


int main()
{
    int a = 10;
    int* const i = &a;
    i++;
    cout<<*i<<endl;
    return 0;
}
