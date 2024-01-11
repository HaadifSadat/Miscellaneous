#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
std::pair<int, int> twosum(std::vector<int> v, int target)
{
    int n = (v.size());
    int s = 0, e = (n - 1);

    while (s < e)
    {
        if (v[s] + v[e] == target)
        {
            return std::make_pair(s, e);
        }
        else if (v[s] + v[e] > target)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return std::make_pair(-1, -1);
}
int main()
{
    int nums1[] = {3, 2, 4};
    int n = 3;
    int target1 = 6;

    vector<pair<int, int>> v;

    return 0;
}