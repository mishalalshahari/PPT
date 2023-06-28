// Given a sorted array of distinct integers and a target value, return the index if the
// target is found. If not, return the index where it would be if it were inserted in
// order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> nu,int target)
{
    int st=0;
    int en=nu.size()-1;
    while (st<en)
    {
        int mid=(st+en)/2;
        if(nu[mid]==target) return mid;
        else if(nu[mid]>target)
        {
            en=mid-1;
        }
        else st=mid+1;
        return st;
        /* code */
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>nu(n);
    for(int i=0;i<n;i++)
    {
        cin>>nu[i];
    }
    int target;
    cin>>target;
    solve(nu,target);
    
}