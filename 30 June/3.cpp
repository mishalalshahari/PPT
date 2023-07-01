// <aside>
// 💡 Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

// **Example 1:**

// Input: nums = [-4,-1,0,3,10]

// Output: [0,1,9,16,100]

// **Explanation:** After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100]

// </aside>

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> nums)
{
    int l=0;
    int r=nums.size()-1;
    vector<int> ans;
    int ind=nums.size()-1;
    while(l<=r)
    {
        int left=nums[l]*nums[l];
        int right=nums[r]*nums[r];
        if(left>right)
        {
            ans[ind]=left;
            l++;
        }
        else{
            ans[ind]=right;
            r--;
        }
        ind--;

    }
    return ans;
}
int main()
{
    vector<int> nums={-4,-1,0,3,10};
    vector<int> result=solve(nums);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}