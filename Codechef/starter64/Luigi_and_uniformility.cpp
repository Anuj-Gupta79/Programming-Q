#include<bits/stdc++.h>
using namespace std;

int LAU(vector<int> arr){
    int ans = 0;

    int min_element = INT_MAX;
    for(auto it : arr) min_element = min(min_element, it);

    bool flag = false;
    for(auto it : arr){
        if(min_element != it){
            if(it%min_element == 0) ans++;
            else {
                flag = true;
                break;
            }
        }
    }

    if(flag) return arr.size();
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
        
        cout<<LAU(arr)<<endl;
    }
    return 0;
}