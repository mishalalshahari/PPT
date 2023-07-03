// Given two strings s and t, return true *if they are equal when both are typed into empty text editors*. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

// **Example 1:**

// **Input:** s = "ab#c", t = "ad#c"

// **Output:** true

// **Explanation:**

// Both s and t become "ac".
#include <bits/stdc++.h>
using namespace std;
string solve(string ss)
{
    stack<char> st;
    for (int i = 0; i < ss.size(); i++)
    {
        if (!st.empty() && ss[i] == '#')
        {
            st.pop();
        }
        else if (st.empty() && ss[i] == '#')
        {
            continue;
        }
        else
        {
            st.push(ss[i]);
        }
    }
    string ret;
    while (!st.empty())
    {
        ret += st.top();
        st.pop();
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
bool backspaceCompare(string s, string t)
{
    string aa = solve(s);
    string bb = solve(t);
    if (aa == bb)
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "ab#c";
    string t = "ad#c";

    bool asss = backspaceCompare(s, t);
    cout << asss;
}