
// 💡 **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// **Example 1:**
// Input: nums = [1,2,3,1]

// Output: true

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> a(n);
    unordered_map<int,int> mp;
    bool flag = false;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]] > 1) flag = true;
    }
    cout << flag << endl;
}