// <aside>
// 💡 **Question 5**
// You are given a large integer represented as an integer array digits, where each
// digits[i] is the ith digit of the integer. The digits are ordered from most significant
// to least significant in left-to-right order. The large integer does not contain any
// leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

// </aside>
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> nums)
{
    int s=nums.size();
    for(int i=s-1;i>=0;i--)
    {
        if(nums[i]<9)
        {
            nums[i]++;
            return nums;
        }
        else{
            nums[i]=0;
        }
    }
    nums.push_back(0);
    nums[0]=1;
    return nums;
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
    solve(nums);
}