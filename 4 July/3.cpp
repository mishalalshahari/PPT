//  **Question 3**

// Given two strings word1 and word2, return *the minimum number of **steps** required to make* word1 *and* word2 *the same*.

// In one **step**, you can delete exactly one character in either string.

// **Example 1:**

// **Input:** word1 = "sea", word2 = "eat"

// **Output:** 2

// **Explanation:** You need one step to make "sea" to "ea" and another step to make "eat" to "ea".
#include<bits/stdc++.h>
using namespace  std;
class Solution {
private:
    int lcs(string word1,string word2){
        int m = word1.length();
        int n = word2.length();
        int dp[m+1][n+1];

        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
                else if(word1[i-1] == word2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
public:
    int minDistance(string word1, string word2) {
        int a = lcs(word1,word2);
        int m=word1.size();
        int n=word2.size();

        int dels = (m-a)+(n-a);
        return dels;
    }
};