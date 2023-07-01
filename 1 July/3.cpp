// Given an array of integers arr, return *true if and only if it is a valid mountain array*.

// Recall that arr is a mountain array if and only if:

// - arr.length >= 3
// - There exists some i with 0 < i < arr.length - 1 such that:
//     - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//     - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
#include <bits/stdc++.h>
using namespace std;
bool validMountainArray(vector<int> &arr)
{
    bool ans = true;
    if (arr.size() <= 2)
        return false;
    int peak = -1;
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            peak = i;
        }
    }
    if (peak == 0 || peak == arr.size() - 1)
        return false;
    for (int i = 0; i < peak; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            return false;
        }
    }

    for (int i = peak + 1; i < arr.size(); i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr={1,2,3,4,5,4,3,2,1};
    bool ans=validMountainArray(arr);
    cout<<ans;
}