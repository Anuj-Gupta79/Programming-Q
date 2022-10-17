#include<bits/stdc++.h>
using namespace std;

int turn(vector<int> &arr){

    int sum = 0;
    for(auto it : arr) sum += it;
    return sum;
  
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        int k; cin>>k;

        vector<int> arr;

        for(int i=0;i<n;i++){
            int element; cin>>element;
            arr.push_back(element);
        }

        // write your code here 
        if(turn(arr) > 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

