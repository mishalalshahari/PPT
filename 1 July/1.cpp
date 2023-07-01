// A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

// - s[i] == 'I' if perm[i] < perm[i + 1], and
// - s[i] == 'D' if perm[i] > perm[i + 1].

// Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

// **Example 1:**

// **Input:** s = "IDID"

// **Output:**

// [0,4,1,3,2]
#include<bits/stdc++.h>
using namespace std;
 vector<int> diStringMatch(string s) {
        vector<int> ans;
        int i=0;
        int j=s.size();
        for(auto ii:s)
        {
            if(ii=='I')
            {
                ans.push_back(i++);
            }
            else
            {
                ans.push_back(j--);

            }

        }
        ans.push_back(i);
        return ans;
        
    }
int main()
{
    string s="IDID";
    vector<int> temp=diStringMatch(s);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}