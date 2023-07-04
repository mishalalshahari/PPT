// **Question 1**
// Given two strings s1 and s2, return *the lowest **ASCII** sum of deleted characters to make two strings equal*.

// **Example 1:**

// **Input:** s1 = "sea", s2 = "eat"

// **Output:** 231

// **Explanation:** Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.

// Deleting "t" from "eat" adds 116 to the sum.

// At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.

#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int solve(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s1[i] == s2[j]){
            dp[i][j] = s1[i]+solve(i-1,j-1,s1,s2,dp);
            return dp[i][j];
        }
        return dp[i][j] = max(solve(i-1,j,s1,s2,dp) , solve(i,j-1,s1,s2,dp));
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m = s2.size();

        int sum1 = 0, sum2 = 0;
        for(auto x:s1){
            sum1+=x;
        }
        for(auto x:s2){
            sum2+=x;
        }
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return (sum1+sum2)-2*solve(n-1,m-1,s1,s2,dp);
    }
};