// You are given an integer array nums and an integer k.

// In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

// The score of nums is the difference between the maximum and minimum elements in nums.

// Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

// Example 1:
// Input: nums = [1], k = 0
// Output: 0

// Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
#include <bits/stdc++.h>
using namespace std;
int smallestRangeI(vector<int> &nums, int k)
{
    int n = nums.size();
    int maxi = nums[0], mini = nums[0];

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, nums[i]);
        mini = min(mini, nums[i]);
    }

    int diff = maxi - mini;

    if (diff - k <= k)
        return 0;
    return diff - k - k;
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
    int k;
    cin >> k;
    cout << smallestRangeI(nums,k);
}