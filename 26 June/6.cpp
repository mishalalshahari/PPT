// Given an array of integers nums which is sorted in ascending order, and an integer target,
// write a function to search target in nums. If target exists, then return its index. Otherwise,
// return -1.

// You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4

// Explanation: 9 exists in nums and its index is 4
#include<bits/stdc++.h>
using namespace std;
int binary(vector<int> v,int target){
    int i=0,j=v.size()-1;
    while(i<j){
        int mid = (i+j)/2;
        if(v[mid] == target) return mid;
        else if(v[mid]>target) j = mid-1;
        else i = mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    cout<<binary(nums,target);
}