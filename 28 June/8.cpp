// Question 8
// Given an array of meeting time intervals where intervals[i] = [starti, endi],
// determine if a person could attend all meetings.

// Example 1:
// Input: intervals = [[0,30],[5,10],[15,20]]
// Output: false

#include<bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int result = 0;

        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        }); 

        for (int i = 0; i < intervals.size()-1; i++) {
            // no overlap
            if (intervals[i][1] <= intervals[i+1][0]) continue;
            // overlap
            intervals[i+1][0] = intervals[i][0];
            intervals[i+1][1] = min(intervals[i][1], intervals[i+1][1]);
            result++;
        }

        return result;
    }
int main()
{
    int r,col;
    cin>>r>>col;
    vector<vector<int>> nums;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>nums[i][j];

        }
    }
    eraseOverlapIntervals(nums);
}