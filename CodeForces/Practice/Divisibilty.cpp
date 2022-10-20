#include<bits/stdc++.h>
using namespace std;

int power(int n){
    int count = 0;
    while(n>0 && n%2==0){
        count++;
        n /= 2;
    }
    return count;
}

int fun(vector<int> arr, int n){
    int ans = 0;

    int temp = 0;
    for(auto it : arr){
        temp += power(it);
    }
    if(temp >= n) return 0;
 
    vector<int> pow_temp;
    for(int i=n; i>0; i--){
        if(i%2 == 0) pow_temp.push_back(power(i));
    }

    sort(pow_temp.begin(), pow_temp.end(), greater<int>());

    for(auto it : pow_temp){
        temp += it;
        ans++;
        if(temp >= n) return ans;
    }

    return -1;
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

        cout<<fun(arr, n)<<endl;
    }
    return 0;
}