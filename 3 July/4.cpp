// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// **Example 1:**

// **Input:** s = "Let's take LeetCode contest"

// **Output:** "s'teL ekat edoCteeL tsetnoc"
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{

    int j = 0;
    for (int i = 0; i <= s.size(); i++)
    {

        if (s[i] == ' ' || i == s.size())
        {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
    }
    return s;
}
int main()
{
    string s = "Let's take LeetCode contest";
    string ans = reverseWords(s);
}