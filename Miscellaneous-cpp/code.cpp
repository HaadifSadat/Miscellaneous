/*
leet code : 
https://leetcode.com/problems/two-sum/
*/

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> twosum(vector<int> v, int target)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if(v[i]+v[j] == target && !(i == j))
            {
                return make_pair(i,j);
            }
        }
    }
}
int main()
{
    // test case 1
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    pair<int,int> ans = twosum(nums,target);
    cout<<ans.first<<" "<<ans.second<<endl;


    // test case 2
    vector<int> nums1 = {3,2,4}; 
    int target1 = 6;

    pair<int,int> ans1 = twosum(nums1,target1);
    cout<<ans1.first<<" "<<ans1.second<<endl;

    // test case 3
    vector<int> nums2 = {3,3}; 
    int target2 = 6;

    pair<int,int> ans2 = twosum(nums2,target2);
    cout<<ans2.first<<" "<<ans2.second<<endl;

    return 0;
}