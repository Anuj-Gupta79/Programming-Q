#include<bits/stdc++.h>
using namespace std;

int Max_Profit(vector<int> weight, vector<int> value, int Capacity, int n){
    // Form the grid 
    int t[n+1][Capacity+1];

    // Fill the grid according to our available choices 
    for(int i=0; i<=n; i++){
        for(int j=0; j<=Capacity; j++){
            if(i==0 || j==0) t[i][j] = 0;
            else {
                if(j>=weight[i-1]){
                    t[i][j] = max(t[i-1][j], value[i-1] + t[i-1][j-weight[i-1]]);
                }
                else t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][Capacity];
}

int main(){
    int n; cin>>n;
    vector<int> weight, value;

    for(int i=0; i<n; i++){
        int wt; cin>>wt;
        weight.push_back(wt);
    }

    for(int i=0; i<n; i++){
        int val; cin>>val;
        value.push_back(val);
    }

    int Capacity; cin>>Capacity;

    cout<<"Maximum Profit is "<<Max_Profit(weight, value, Capacity, n)<<endl;

    return 0;
}