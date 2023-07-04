// 💡 **Question 5**

// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of **consecutive repeating characters** in chars:

// - If the group's length is 1, append the character to s.
// - Otherwise, append the character followed by the group's length.

// The compressed string s **should not be returned separately**, but instead, be stored **in the input character array chars**. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done **modifying the input array,** return *the new length of the array*.

// You must write an algorithm that uses only constant extra space.

// **Example 1:**

// **Input:** chars = ["a","a","b","b","c","c","c"]

// **Output:** Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]

// **Explanation:**

// The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
       int i=0;
       int j=0;
       int len=chars.size();
        int count=1;
       vector<char>vx;
       while(i<len){
           for(int j=i+1;j<len;j++){
               if(chars[i]==chars[j])
                   count++;
               else
                   break;
           }
           if(count==1)
           vx.push_back(chars[i]);
           else{
               string str=to_string(count);
               vx.push_back(chars[i]);
               for(int z=0;z<str.length();z++){
                   
                   vx.push_back(str[z]);
               }
           }
           i=i+count;
           count=1;
       }
        chars=vx;
        return chars.size();
    }
};