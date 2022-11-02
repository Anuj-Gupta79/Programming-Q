#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;
        fun(n);
    }
    return 0;
}