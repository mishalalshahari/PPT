// You are given an m x n integer matrix matrix with the following two properties:

// - Each row is sorted in non-decreasing order.
// - The first integer of each row is greater than the last integer of the previous row.

// Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

// You must write a solution in O(log(m * n)) time complexity.
#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int X) {
        int n=mat.size();
	    int i=0;
	    int j=mat[0].size()-1;
	    while(i<n && j>=0)
	    {
	        if(mat[i][j]==X)
	        {
	            return 1;
	        }
	        if(X<mat[i][j])
	        {
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    return false;
    }
int main()
{
    vector<vector<int>> mat={{1,2,3},{4,5,6},{6,7,8}};
    int tar=3;
    bool ans=searchMatrix(mat,tar);


}