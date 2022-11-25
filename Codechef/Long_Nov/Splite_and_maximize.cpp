#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353


int main(){
    ll t; cin>>t;
    while(t--){
        // write your code here 
        ll n; cin>>n;

        ll sum = 0;

        for(ll i=0; i<n; i++){
            ll element; cin>>element;
            sum += element;
            sum %= mod;
        }

        ll ans = ((sum)*(sum-1))%mod;
        
        cout<<ans<<endl;
    }
    return 0;
}