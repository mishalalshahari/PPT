
// 💡 **Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.

// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(a[n-1] < 9) {
        a[n-1] = a[n-1] + 1;
    }
    else{
        a[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            if(a[i]<9){
                a[i] = a[i]+1;
                break;
            }
            else{
                a[i] = 0;
            }
        }
        a.insert(a.begin(),1);
    }
    for(auto x:a){
        cout << x << " ";
    }
}