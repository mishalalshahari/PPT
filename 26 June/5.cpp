// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

// Example 1:
// Input: nums = [1,2,3]
// Output: 6
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    int ans = nums[n-1]*nums[n-2]*nums[n-3];
    cout << ans;
}