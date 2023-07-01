// <aside>
// 💡 **Question 1**

// Convert 1D Array Into 2D Array

// You are given a **0-indexed** 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using **all** the elements from original.

// The elements from indices 0 to n - 1 (**inclusive**) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (**inclusive**) should form the second row of the constructed 2D array, and so on.

// Return *an* m x n *2D array constructed according to the above procedure, or an empty 2D array if it is impossible*.

// </aside>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{
    vector<vector<int>> temp(m, vector<int>(n));
    int ind = 0;
    if (m * n != original.size())
    {
        return {};
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[i][j] = original[ind++];
            }
        }
    }
    return temp;
}

int main()
{
    vector<int> original={1,2,3,4};
    int n=2,m=2;
    
    vector<vector<int>> ans=construct2DArray(original,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

}