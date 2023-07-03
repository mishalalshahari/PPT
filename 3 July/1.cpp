// Given two strings s and t, *determine if they are isomorphic*.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// **Example 1:**

// **Input:** s = "egg", t = "add"

// **Output:** true
#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    int n = s.size();
    int m = t.size();
    if (n != m)
    {
        return false;
    }
    unordered_map<char, int> nn, mm;

    for (int i = 0; i < n; i++)
    {
        if (nn[s[i]] != mm[t[i]])
        {
            return false;
        }
        nn[s[i]] = i + 1;
        mm[t[i]] = i + 1;
    }
    return true;
}
int main()
{
    string s = "edd";
    string t = "add";
    bool ans = isIsomorphic(s, t);
    cout << ans;
}