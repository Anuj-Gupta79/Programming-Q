#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10^9+7

int main(){
    ll t; cin>>t;
    while(t--){
        // write your code here 
        ll n; cin>>n;
        map<ll, ll> mp;

        for(int i=0; i<n; i++){
            int element; cin>>element;
            mp[element]++;
        }

        ll sum = 0;

        for(auto it : mp){
            sum = (sum + (((it.first*((it.first-1)%mod))%mod)*it.second)%mod)%mod;
        }
        cout<<sum<<endl;
    }
    return 0;
}