// You are given an inclusive range [lower, upper] and a sorted unique integer array
// nums, where all elements are within the inclusive range.

// A number x is considered missing if x is in the range [lower, upper] and x is not in
// nums.

// Return the shortest sorted list of ranges that exactly covers all the missing
// numbers. That is, no element of nums is included in any of the ranges, and each
// missing number is covered by one of the ranges.

// Example 1:
// Input: nums = [0,1,3,50,75], lower = 0, upper = 99
// Output: [[2,2],[4,49],[51,74],[76,99]]

// Explanation: The ranges are:
// [2,2]
// [4,49]
// [51,74]
// [76,99]
#include<bits/stdc++.h>
using namespace std;
vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> ans;
    int ind = 0;
    for (int i = 1; i <= nums.size(); i++)
    {
        if (i < nums.size() && nums[i] == nums[i - 1] + 1)
        {
            continue;
        }
        else
        {
            int cur = i - 1;
            if (cur == ind)
            {
                ans.push_back(to_string(nums[ind]));
            }
            else
            {
                ans.push_back(to_string(nums[ind]) + "->" + to_string(nums[cur]));
            }
            ind = i;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        nums[i];
    }
    summaryRanges(nums);
}