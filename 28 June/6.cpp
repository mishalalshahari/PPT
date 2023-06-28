// Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only
// constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// // Output: 1
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        map<int,int> mono;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            mono[nums[i]]++;
        }
        for(auto p:mono)
        {
            if(p.second==1)
            {
                ans=p.first;
                break;
            }
            
        }
        return ans;
    }
int main()
{
     int n;
    cout<<"Enter the size of  the integer";
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    singleNumber(nums);

}