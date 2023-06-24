
// 💡 **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

// Note that you must do this in-place without making a copy of the array.

// **Example 1:**
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int i = 0; 
    int j = 0;  
    while (j < n) {
        if (v[j] != 0) {
            swap(v[i], v[j]);
            i++;
        }
        j++;
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}