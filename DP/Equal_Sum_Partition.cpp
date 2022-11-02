#include<bits/stdc++.h>
using namespace std;

bool partition(vector<int> arr,int val, int n){
    int t[n+1][val+1];

    for(int i=0; i<=n; i++){
        for(int j=0; j<=val; j++){
            if(i == 0) t[i][j] = false;
            else if(j == 0) t[i][j] = true;
            else {
                if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
                }
                else t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][val];
}

int main(){
    int n; cin>>n;

    vector<int> arr;
    int sum = 0;
    for(int i=0; i<n; i++){
        int element; cin>>element;
        arr.push_back(element);
        sum += element;
    }

    if(sum & 1) cout<<"False"<<endl;
    else{
        int value = sum/2;
        if(partition(arr,value,n)) cout<<"True"<<endl;
        else cout<<"False"<<endl;

    }
    return 0;
}