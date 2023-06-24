
// 💡 **Q5.** You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// **Example 1:**
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

// **Explanation:** The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &a,vector<int> &b,int n, int m){
    int i = n - 1;  
    int j = m - 1;  
    int k = m + n - 1;  

    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[k] = b[i];
            i--;
        } 
        else {
            a[k] = b[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        a[k] = b[j];
        j--;
        k--;
    }
}
int main(){
    int n,m;
    cout << "Enter size of arrays" << endl;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    merge(a,b,n,m);
    for(auto x : a) cout << x << " ";
}