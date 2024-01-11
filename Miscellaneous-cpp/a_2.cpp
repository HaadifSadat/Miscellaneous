#include <iostream>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int ans = 2;
    int pans = 2;
    int pd = a[1] - a[0];
    int i = 2;
    while (i < n)
    {
        if (a[i] - a[i - 1] == pd)
        {
            pans++;
        }
        else
        {
            pd = a[i] - a[i - 1];
        }
        ans = max(ans, pans);
        pans = 2;
        i++;
    }
    std::cout<<ans<<std::endl;
    return 0;
}