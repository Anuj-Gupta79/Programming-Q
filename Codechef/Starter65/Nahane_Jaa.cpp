#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool possible(vector<ll> &arr, ll k){
    if(arr.size()==1 && arr[0]==k) return true;

    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] == k) return true;
    }
    return false;
}

int main(){
    ll t; cin>>t;
    while(t--){
        // write your code here 
        ll n; cin>>n;
        ll k; cin>>k;
        vector<ll> arr;

        for(ll i=0; i<n; i++){
            ll element; cin>>element;
            arr.push_back(element);
        }
        if(possible(arr, k)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}