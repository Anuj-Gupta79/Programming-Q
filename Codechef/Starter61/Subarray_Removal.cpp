#include<bits/stdc++.h>
using namespace std;

int removal(vector<int> arr, int n){
    int ans = 0;

    stack<int> st;

    //this will give us one for except string which have all one
    for(int i=0; i<n; i++){
        if(st.empty()) st.push(arr[i]);
        else {
            if(arr[i] != st.top()){
                ans++;
                st.pop();
            }
            else st.push(arr[i]);
        }
    }

    // this is for string which have all elements are one  
    while(st.size() >= 2){
        int temp = st.top();
        st.pop();

        if(temp == st.top()){
            st.pop();
            st.push(0);
        }
        else {
            ans++;
            st.pop();
        }
    }

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


        cout<<removal(arr, n)<<endl;
    }
    return 0;
}