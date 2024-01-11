#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i];
    }

    cout << std::endl;
    // Iterator

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
    cout << std::endl;

    for (auto element : v)
    {
        cout << element;
    }
    cout << std::endl;

    v.pop_back();
    vector<int> v2(3,5);
    for (auto ele : v2)
        cout << ele;

    return 0;
}