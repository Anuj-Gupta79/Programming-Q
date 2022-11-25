#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,q; cin>>n>>q;
        ll bits[64][n];
        for(ll i=0; i<n; i++){
            ll x; cin>>x;
            for(ll j=0; j<64; j++){
                bits[j][i] = x%2;
                x/=2;
            }
        }

        for(ll i=0; i<64; i++){
            ll count=0;
            for(ll j=0; j<n; j++){
                count += bits[i][j];
                bits[i][j] = count;
            }
        }

        while(q--){
            ll k, L1, R1, L2, R2; cin>>k>>L1>>R1>>L2>>R2;
            L1--; L2--; R1--; R2--;
            ll idx1=R1-L1+1;
            ll idx2=R2-L2+1;
            ll t1,t2;

            if(L1==0) t1 = bits[k][R1];
            else t1 = bits[k][R1]-bits[k][L1-1];

            if(L2==0) t2=bits[k][R2];
            else t2=bits[k][R2]-bits[k][L2-1];

            ll ans= (ll)(idx1-t1)*(ll)(t2) + (ll)(t1)*(ll)(idx2-t2);

            cout<<ans<<endl;
        }
    }
  return 0;
}