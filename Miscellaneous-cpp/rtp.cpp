#include <iostream>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }

void RTmkaux(int *arr, int n, int *aux)
{
    aux[n - 1] = arr[n - 1];
    for (int i = n - 2; i > -1; i--)
    {
        aux[i] = max(arr[i], aux[i + 1]);
    }
}
void LTmkaux(int *arr, int n, int *aux)
{
    aux[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        aux[i] = max(arr[i], aux[i - 1]);
    }
}

int main()
{
    int rain[] = {3, 1, 2, 4, 0, 1, 3, 2};
    int n = 8;

    int Laux[n], Rlaux[n];
    RTmkaux(rain, n, Rlaux);
    LTmkaux(rain, n, Laux);

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        f += ((min(Laux[i], Rlaux[i])) - rain[i]);
    }

    cout << f << endl;

    return 0;
}