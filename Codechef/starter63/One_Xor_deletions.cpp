#include<bits/stdc++.h>
using namespace std;

int deletions(vector<int> arr, int n){
    map<int, int> mp;
    vector<int> temp;
    for(auto it : arr){
        mp[it]++;
        temp.push_back(0);
    }

    int mx1 = INT_MIN;
    for(auto it : mp){
        mx1 = max(mx1, it.second);
    }

    for(auto it : mp) {
        temp[it.first] = it.second;
    }

    int mx2 = INT_MIN;
    for(int i=0; i<n; i++){
        if((i^(i+1)) <= 1) {
            mx2 = max(mx2, temp[i] + temp[i+1]);
        }
    }

    int ans = n - max(mx1,mx2);

    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;

        vector<int> arr;
        for(int i=0; i<n; i++){
            int element; cin>>element;
            arr.push_back(element);
        }

        cout<<deletions(arr, n)<<endl;
    }
    return 0;
}