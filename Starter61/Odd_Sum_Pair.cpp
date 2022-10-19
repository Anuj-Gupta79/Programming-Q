#include<bits/stdc++.h>
using namespace std;

bool fun(int n1, int n2, int n3){
    int s1 = n1+n2;
    int s2 = n2+n3;
    int s3 = n3+n1;
    if(s1&1 != 0 || s2&1 != 0 || s3&3 != 0) return true;
    return false;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n1,n2,n3; cin>>n1>>n2>>n3;

        if(fun(n1, n2, n3)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}