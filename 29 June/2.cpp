// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

// **Explanation:**

// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> solve(vector<int> nums1, vector<int> nums2)
{
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> temp2;
    set<int> s1;
    set<int> s2;
    for (auto u : nums1)
    {
        s1.insert(u);
    }
    for (auto u : nums2)
    {
        s2.insert(u);
    }
    for (auto n : s1)
    {
        if (s2.count(n) == 0)
        {
            temp.push_back(n);
        }
    }

    for (auto n : s2)
    {
        if (s1.count(n) == 0)
        {
            temp2.push_back(n);
        }
    }
    ans.push_back(temp);
    ans.push_back(temp2);
    return ans;
}
int main()
{
    vector<int> num1 = {1, 2, 3};
    vector<int> num2 = {2, 4, 6};
    vector<vector<int>> temp=solve(num1,num2);
    for(int i=0;i<temp.size();i++)
    {
        for(int j=0;j<temp[0].size();j++)
        {
            cout<<temp[i][j]<<" ";
        }
    }
}