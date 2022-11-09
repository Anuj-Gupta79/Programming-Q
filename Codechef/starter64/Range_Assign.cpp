#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool valid(vector<ll> arr, int n){
    if(n<=2 || arr[0]==arr[n-1] || arr[0]==arr[n-2] || arr[1]==arr[n-1]){
        return true;
    }

    ll first = arr[0];

    for(int i=1; i<n-2; i++){
        if(arr[i] == first ){
            if(arr[i+1] == arr[n-1]) return true;
        }
    }
    return false;

}

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 

        int n; cin>>n; 

        vector<ll> arr;
        for(int i=0; i<n; i++){
            ll element; cin>>element;
            arr.push_back(element);
        }
        
        if(valid(arr, n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}