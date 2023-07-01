// Given two integer arrays arr1 and arr2, and the integer d, *return the distance value between the two arrays*.

// The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

// **Example 1:**

// **Input:** arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

// **Output:** 2

// **Explanation:**

// For arr1[0]=4 we have:
#include <bits/stdc++.h>
using namespace std;
int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
{

    int count = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        int flag = 1;
        for (int j = 0; j < arr2.size(); j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                flag = 0;
                break;
            }
        }
        count += flag;
    }
    return count;
}
int main()
{
    vector<int> arr1 = {4, 5, 8};
    vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;
    int ans=findTheDistanceValue(arr1,arr2,d);
    cout<<ans;
}
