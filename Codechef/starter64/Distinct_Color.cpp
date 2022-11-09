#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        // write your code here 
        int n; cin>>n;

        int max_boxes = INT_MIN;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            max_boxes = max(max_boxes, x);
        }

        cout<<max_boxes<<endl;
    }
    return 0;
}