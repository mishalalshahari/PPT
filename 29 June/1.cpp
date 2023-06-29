// <aside>
// 💡 **Question 1**
// Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

// **Example 1:**

// Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

// Output: [1,5]

// **Explanation:** Only 1 and 5 appeared in the three arrays.

// </aside>



#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>num,vector<int> num2,vector<int>num3)
{
    int i=0;
    int j=0;
    int k=0;
    vector<int> asn;
    while(i<num.size()&&j<num2.size()&&num3.size())
    {
        if(num[i]==num2[j]&&num3[k]==num2[j])
        {
            asn.push_back(num[i]);
            i++;
            j++;
            k++;
        }
        else if(num[i]<num2[j])
        {
            i++;
        }
        else if (num2[j]<num3[k])
        {
            j++;
        }
        else k++;

    }
    return asn;

}
int main()
{
    vector<int> num={1,2,3,4,5};
    vector<int> num2={1,2,5,7,9};
    vector<int> num3={1,3,4,5,8};
    
    vector<int>temp=solve(num,num2,num3);
    
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }

}