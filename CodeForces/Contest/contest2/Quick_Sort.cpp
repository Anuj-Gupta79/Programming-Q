#include<bits/stdc++.h>
using namespace std;

int operations(vector<int>& arr, int k){
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());

    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != temp[i]) count++;
    }

    return count/k;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int k; cin>>k;

        vector<int> arr;
        for(int i=0; i<n; i++){
            int element; cin>>element;
            arr.push_back(element);
        }
        cout<<operations(arr, k)<<endl;
    }
    return 0;
}