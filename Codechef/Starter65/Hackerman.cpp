#include<bits/stdc++.h>
using namespace std;

int win(int sum){
    if(sum<=3) return true;

    for(int i=2; i<sum; i++){
        if(sum%i == 0) return false;
    }
    
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int A,B; cin>>A>>B;
        
        if(win(A+B)) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}