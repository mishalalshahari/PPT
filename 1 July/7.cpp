
// <aside>
// 💡 **Question 7**

// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

// **Example 1:**

// </aside>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> ans(n, vector<int>(n));
    int right = n - 1;
    int top = 0;
    int left = 0;
    int bottom = n - 1;
    int temp = 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans[top][i] = temp;
            temp++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans[i][right] = temp;
            temp++;
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans[bottom][i] = temp;
                temp++;
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans[i][left] = temp;
                temp++;
            }
            left++;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> temp = generateMatrix(n);
}