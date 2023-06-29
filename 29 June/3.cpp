// <aside>
// 💡 Given a 2D integer array matrix, return *the **transpose** of* matrix.

// The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

// **Example 1:**

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

// Output: [[1,4,7],[2,5,8],[3,6,9]]

// </aside>

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> temp(col,vector<int>(row));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                temp[j][i]=matrix[i][j];
            }
        }
        return temp;

    }
int main()
{
    vector<vector<int>> temp={{1,2,3},{4,5,6},{7,8,9}};
    transpose(temp);
    
}