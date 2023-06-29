// <aside>
// 💡 **Question 8**

// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

// *Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

// **Example 1:**

// **Input:** nums = [2,5,1,3,4,7], n = 3

// **Output:** [2,3,5,4,1,7]

// </aside>
#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
        int j=n;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j++]);
        }
        return ans;
}
int main()
{
    int n=3;
    vector<int> nums={2,5,1,3,4,7};
    vector<int> temp=shuffle(nums,n);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}