#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size; //size of the arry

    int ar[size]; //creating the size of the array
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i]; //filling the arry
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[j] < ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << " " << ar[i];
    }
}