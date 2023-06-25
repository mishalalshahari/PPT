#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int resIndex=-1;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])->second==1){
            resIndex=i;
            break;
        }
    }
    cout<<resIndex<<endl;
    return 0;
}
