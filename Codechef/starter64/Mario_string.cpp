#include<bits/stdc++.h>
using namespace std;

void possible(string s, int n){

    string A = s.substr(0, n/2);
    string B = s.substr(n/2, n);

    if(A == B) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 

        int n; cin>>n;

        string s; cin>>s;
        
        possible(s, n);
    }
    return 0;
}