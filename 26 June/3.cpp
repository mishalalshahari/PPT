// We define a harmonious array as an array where the difference between its maximum value
// and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence
// among all its possible subsequences.

// A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5

// Explanation: The longest harmonious subsequence is [3,2,2,2,3].
#include <bits/stdc++.h>
using namespace std;
int findLHS(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int r = 0;
    int l = 0;
    int ans = 0;
    while (r < nums.size())
    {
        if (nums[r] - nums[l] == 1)
        {
            int temp = r - l + 1;
            ans = max(temp, ans);
        }
        else if (nums[r] - nums[l] > 1)
        {
            while (nums[r] - nums[l] > 1)
                l++;
        }
        r++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << findLHS(nums);
}