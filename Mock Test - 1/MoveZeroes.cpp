#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0,countZero=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k++]=arr[i];
        }else{
            countZero++;
        }
    }
    for(int i=0;i<countZero;i++){
        arr[k++]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
