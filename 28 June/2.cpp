// Question 2
// Given an array nums of n integers, return an array of all the unique quadruplets
// [nums[a], nums[b], nums[c], nums[d]] such that:
//            ● 0 <= a, b, c, d < n
//            ● a, b, c, and d are distinct.
//            ● nums[a] + nums[b] + nums[c] + nums[d] == target

// You may return the answer in any order.

// Example 1:
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    if (nums.empty())
    {
        return ans;
    }
    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = i + 1; j < nums.size(); j++)
        {
            long long remainsum = long(target) - long(nums[i]) - long(nums[j]);
            int low = j + 1;
            int end = nums.size() - 1;
            while (low < end)
            {
                int sum2 = nums[low] + nums[end];
                if (remainsum > sum2)
                {
                    low++;
                }
                else if (remainsum < sum2)
                {
                    end--;
                }
                else
                {
                    vector<int> temp(4, 0);
                    temp[0] = nums[i];
                    temp[1] = nums[j];
                    temp[2] = nums[low];
                    temp[3] = nums[end];
                    ans.push_back(temp);
                    while (low < end && nums[low] == temp[2])
                    {
                        low++;
                    }
                    while (low < end && nums[end] == temp[3])
                    {
                        end--;
                    }
                }
            }
            while (j + 1 < nums.size() && nums[j + 1] == nums[j])
            {
                ++j;
            }
        }
        while (i + 1 < nums.size() && nums[i + 1] == nums[i])
        {
            ++i;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin>>target;
    fourSum(v,target);
}