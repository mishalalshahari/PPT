// <aside>
// 💡 **Question 8**

// An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

// Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

// **Example 1:**

// **Input:** changed = [1,3,4,2,6,8]

// **Output:** [1,3,4]

// **Explanation:** One possible original array could be [1,3,4]:

// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.

// Other original arrays could be [4,3,1] or [3,1,4

// </aside>

#include<bits/stdc++.h>
using namespace std;
vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2!=0) return {};
        sort(changed.begin(),changed.end());
        map<int,int> mp;
        vector<int> ans;
        for(auto i:changed){
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[changed[i]]==0) 
            {
                continue;
            }
            if(mp[changed[i]*2]==0)
            {
                return {};
            }
            ans.push_back(changed[i]);
            mp[changed[i]*2]--;
            mp[changed[i]]--;


        }
        return ans;
    }
int main()
{
    vector<int> changed={1,3,4,2,6,8};
    vector<int> temp=findOriginalArray(changed);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i];
    }
}