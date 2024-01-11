#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, -10, 1, 3, -20};
    int N = 50;
    int sac[N] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > -1)
        {
            sac[arr[i]] = -1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (sac[i] == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}