#include <iostream>
using namespace std;
int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        int j;

        for (j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {
        int j;

        for (j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}