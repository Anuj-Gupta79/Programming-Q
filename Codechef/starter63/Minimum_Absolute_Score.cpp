#include<bits/stdc++.h>
using namespace std;

int score(string a, string b, int n){

    vector<int> values;

    for(int i=0; i<n; i++){

        int x = min(abs(a[i]-b[i]), 26 - abs(a[i] - b[i]));
        values.push_back(x);
    }

    int range = 0;
    for(auto it : values) range += it;

    bool t[n+1][range + 1];

    for(int i=0; i<=n; i++){
        for(int j=0; j<=range; j++){
            if(i==0) t[i][j] = false;
            else if(j==0) t[i][j] = true;
            else {
                if(j>=values[i-1]){
                    t[i][j] = t[i-1][j] || t[i-1][j-values[i-1]]; 
                }
                else t[i][j] = t[i-1][j];
            }
        }
    }

    cout<<"Range : "<<range<<" "; 
    vector<bool> temp;
    for(int i=0; i<=range; i++){
        if(t[n][i])temp.push_back(i);
    }

    int mn = INT_MAX;
    for(int i=0; i<temp.size();i++) {
        // cout<<temp[i]<<" ";
        mn = min(mn, range - 2*temp[i]);
    }

    return mn;
    
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;
        string a,b; cin>>a>>b;
        cout<<score(a, b, n)<<endl;
    }
    return 0;
}