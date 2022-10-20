#include<bits/stdc++.h>
using namespace std;

int operate(string s){
    int count=0;

    for(int i=0;i<s.size();i++){
        if(s[i] == s[i+1]) count++;
    }

    return count;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;
        string s; cin>>s;

        cout<<operate(s)<<endl;
    }
    return 0;
}