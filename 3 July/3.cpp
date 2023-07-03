// <aside>
// 💡 **Question 3**

// Given two non-negative integers, num1 and num2 represented as string, return *the sum of* num1 *and* num2 *as a string*.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

// **Example 1:**

// **Input:** num1 = "11", num2 = "123"

// **Output:**

// "134"

// </aside>
#include <bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2)
{
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    string res = "";

    while (i >= 0 || j >= 0 || carry != 0)
    {
        long sum = 0;
        if (i >= 0)
        {
            sum += (num1[i] - '0');
            i--;
        }
        if (j >= 0)
        {
            sum += (num2[j] - '0');
            j--;
        }
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;

        res += to_string(sum);
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string s = "123";
    string ss = "123";
    string ans = addStrings(s, ss);
}