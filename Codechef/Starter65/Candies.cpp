#include<bits/stdc++.h>
using namespace std;

bool valid(vector<int> &arr){
    map<int, int> price;

    for(auto it : arr) price[it]++;

    for(auto it : price) {
        if(it.second>2) return false;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;

        vector<int> arr;

        for(int i=0; i<n*2; i++){
            int element; cin>>element;
            arr.push_back(element);
        }
        
        if(valid(arr)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}