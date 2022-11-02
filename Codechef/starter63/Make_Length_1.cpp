#include<bits/stdc++.h>
using namespace std;

bool make(string s, int n){

    string temp = "";

    for(int i=0; i<n; i++){
        if(s[i]=='1' && s[i]==s[i+1]) {
            temp += '0';
            i++;
        } else temp += s[i];
    }

    for(auto it : temp) {
        if(it == '1') return false;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;
        string s; cin>>s;

        if(make(s, n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}