

// 💡 **Q3.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// **Example 1:**
// Input: nums = [1,3,5,6], target = 5

// Output: 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int target;
    cout << "Enter target" << endl;
    cin >> target;
    int s = 0 , e = n-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(a[mid] == target){
            cout << mid << endl;
            break;
        }
        else if(a[mid] < target){
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
    }
    if(s==e) cout << s << endl;
}