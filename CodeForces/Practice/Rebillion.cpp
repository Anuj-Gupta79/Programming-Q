#include<bits/stdc++.h>
using namespace std;

int operation(vector<int> arr, int n){
    int operations = 0;

    int i = 0; int j = n-1;

    while(i<j){
        if(arr[i]>arr[j]){
            operations++;
            j--; i++;
        } 
        else if(arr[i] == arr[j] && arr[i]==1) j--;
        else i++;
    }

    return operations;
}


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> arr;

        for(int i=0; i<n; i++){
            int element; cin>>element;
            arr.push_back(element);
        }

        cout<<operation(arr,n)<<endl;

    }
    return 0;
}