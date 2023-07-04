// Given two strings s and p, return *an array of all the start indices of* p*'s anagrams in* s. You may return the answer in **any order**.

// An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// **Example 1:**

// **Input:** s = "cbaebabacd", p = "abc"

// **Output:** [0,6]

// **Explanation:**

// The substring with start index = 0 is "cba", which is an anagram of "abc".

// The substring with start index = 6 is "bac", which is an anagram of "abc".

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        int window=p.size();
        int len=s.size();
        if(len<window){
            return ans;
        }
        int anagramStartIndex = 0, slidingWindow = 0;
        while(slidingWindow < window){
            phash[p[slidingWindow] - 'a']++;
            hash[s[slidingWindow++]-'a']++;
        }
        slidingWindow -= 1;
        while(slidingWindow < len){
            if(hash == phash){
                ans.push_back(anagramStartIndex);
            }
            slidingWindow++;
            if(slidingWindow!=len){
                hash[s[slidingWindow]-'a']++;
            }
            hash[s[anagramStartIndex]-'a']--;
            anagramStartIndex++;
        }
        return ans;
    }
};