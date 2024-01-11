#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::vector<int> v;
    v.push_back(3);
    v.push_back(1);

    vector<int> v2(2, 6);

    for (auto e : v)
    {
        cout << e << " ";
    }

    cout << endl;

    for (auto e : v2)
    {
        cout << e << " ";
    }

    swap(v, v2);

    cout << endl;

    for (auto e : v)
    {
        cout << e << " ";
    }

    cout << endl;

    for (auto e : v2)
    {
        cout << e << " ";
    }

    sort(v.begin(),v.end());
    
    for (auto e : v2)
    {
        cout << e << " ";
    }

    return 0;
}