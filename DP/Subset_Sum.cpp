#include<bits/stdc++.h>
using namespace std;

bool subset_sum(vector<int> arr, int sum){
    int n = arr.size();
    int t[n+1][sum+1];

    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            if(i == 0) t[i][j] = false;
            else if(j == 0) t[i][j] = true;
            else {
                if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
                }
                else t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}


int main(){
    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        int element; cin>>element;
        arr.push_back(element);
    }

    int sum; cin>>sum;

    cout<<subset_sum(arr, sum)<<endl;
    
    return 0;
}