// <aside>
// 💡 **Question 4**

// Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

// **Example 1:**

// **Input:** nums = [0,1]

// **Output:** 2

// **Explanation:**

// [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

// </aside>
#include<bits/stdc++.h>
using namespace std;



int findMaxLength(vector<int>& nums) {
       unordered_map<int,int> mp;
       int longsum=0;
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {
           sum+=nums[i]==0?-1:1;
           if(sum==0)
           {
               if(longsum<i+1)
               {
                   longsum=i+1;
               }    

           }
           else if(mp.find(sum)!=mp.end())
           {
               if(longsum<i-mp[sum])
               {
                   longsum=i-mp[sum];
               }
           }
           else 
           {
               mp[sum]=i;
           }

       }
       return longsum;
    }

int main()
{
    vector<int> nums={1,0,0,1,1,1};
    int ans=findMaxLength(nums);
    cout<<ans ;
}