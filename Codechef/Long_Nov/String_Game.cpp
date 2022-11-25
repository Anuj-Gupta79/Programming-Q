#include<bits/stdc++.h>
using namespace std;

bool fun(string s){
    map<char, int> mp;
    for(auto it : s) mp[it]++;
    for(auto it : mp){
        if(it.second%2  != 0) return false;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;
        string s; cin>>s;

        fun(s) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}