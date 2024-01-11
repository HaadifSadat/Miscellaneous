#include <iostream>
#include <vector>
using namespace std;

int pow(int n, int k)
{
    return (k == 1) ? n : n * pow(n, k - 1);
}

int revserse(int n, int k)
{
    if (n % 10 == n)
    {
        return n;
    }
    return (n % 10) * (pow(10, k - 1)) + revserse(n / 10, k - 1);
}

vector<int> reverseArray(vector<int> a)
{
    vector<int> res;
    res.push_back(a[a.size()-1]);
    for (int i = 0; i < a.size()-1; i++)
    {
        res.push_back (a[i]);
    }
    return res;
}
int main()
{
    // cout<<revserse(123,3)<<endl;
    vector<int> a = {1, 4, 3, 2};
    vector<int> v = reverseArray(a);
    for (auto i : v)
        cout << i << " ";
    return 0;
}