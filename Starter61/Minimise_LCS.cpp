#include<bits/stdc++.h>
using namespace std;

int LCS(string A, string B, int n){
    int ans = INT_MIN;

    vector<int> temp_A(26,0), temp_B(26,0);

    for(auto it : A) temp_A[it-'a']++;
    for(auto it : B) temp_B[it-'a']++;

    for(int i=0; i<26; i++){
        ans = max(ans, min(temp_A[i],temp_B[i]));
    }

    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;

        string A,B; cin>>A>>B;
    
        cout<<LCS(A,B,n)<<endl;
    }
    return 0;
}