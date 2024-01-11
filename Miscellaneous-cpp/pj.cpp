#include <iostream>
using namespace std;
void ToH(int n, char src, char sup, char dest)
{
    if (n == 0)
        return;
    ToH(n - 1, src, dest, sup);
    cout << "from " << src << " to " << dest << endl;
    ToH(n - 1, sup, src, dest);
}
int main()
{
    ToH(3, 'S', 'H', 'D');
    return 0;
}