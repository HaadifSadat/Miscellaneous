#include <iostream>
#include <conio.h>
#include <dos.h>
using namespace std;

int main()
{
    char pwd[9];
    int i;

    // To clear the screen
    clrscr();

    printf("Enter Password: ");
    for (i = 0; i < 8; i++)
    {

        // Get the hidden input
        // using getch() method
        pwd[i] = getch();

        // Print * to show that
        // a character is entered
        printf("*");
    }
    pwd[i] = '\0';
    printf("\n");

    return 0;
}