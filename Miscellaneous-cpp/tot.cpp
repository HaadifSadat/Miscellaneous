/*
leet code : 
https://leetcode.com/problems/two-sum/
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
std::pair<int, int> twosum(vector<pair<int, int>> v, int target1)
{
    int lp = 0, hp = v.size() - 1;
    while (lp < hp)
    {
        if (v[lp].first + v[hp].first == target1 && !(lp == hp))
        {
            return make_pair(v[lp].second, v[hp].second);
        }
        else if (v[lp].first + v[hp].first > target1)
        {
            hp--;
        }
        else
        {
            lp++;
        }
    }
    return make_pair(-1, -1);
}
int main()
{
    int nums1[] = {3, 2, 4};
    int target1 = 6;

    int n = sizeof(nums1) / sizeof(nums1[0]);

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(nums1[i], i));
    }

    sort(v.begin(), v.end(), cmp);

    pair<int, int> ans = twosum(v, target1);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}