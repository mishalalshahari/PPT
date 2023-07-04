// 💡 **Question 2**

// Given a string s containing only three types of characters: '(', ')' and '*', return true *if* s *is **valid***.

// The following rules define a **valid** string:

// - Any left parenthesis '(' must have a corresponding right parenthesis ')'.
// - Any right parenthesis ')' must have a corresponding left parenthesis '('.
// - Left parenthesis '(' must go before the corresponding right parenthesis ')'.
// - '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

// **Example 1:**

// **Input:** s = "()"

// **Output:**

// true
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        int right=0;
        stack<pair<char,int>> s1;
        stack<pair<char,int>>s2;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            s1.push({s[i],i});
            else if(s[i]=='*')
            s2.push({s[i],i});
            else
            {
                if(s1.size())
                s1.pop();
                else if(s2.size())
                s2.pop();
                else
                return false;
            }
        }
        int c=0;
        vector<int> a;
        while(s2.size())
        {
            a.push_back(s2.top().second);
            s2.pop();

        }
        reverse(a.begin(),a.end());
        int last=a.size()-1;
        for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
        cout<<endl;
        while(s1.size())
        {
            auto ind=s1.top().second;
            s1.pop();
            cout<<ind<<endl;
            if(last>=0 && a[last]>ind)
            last--;
            else
            return false;
        }
        return true;
    }
};