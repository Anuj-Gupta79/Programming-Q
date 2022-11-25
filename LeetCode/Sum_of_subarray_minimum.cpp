#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int sum_sub_array_mins(vector<int> arr, int n){
    int sum = 0;

    // Brute Force Approach
    // for(int i=0; i<n; i++){
    //     int temp = arr[i];
    //     for(int j=i; j>=0; j--){
    //         temp = min(temp, arr[j]);
    //         sum = (sum+temp)%mod;
    //     }
    // }
    // Time Complexity : O(n^2) & Space Complexity : O(1)

    // Monotonic Increasing Stack 
    vector<int> left(n), right(n);
    stack<int> prev_smaller, next_smaller; 

    for(int i=0; i<n; i++){
        left[i] = i+1;
        right[i] = n-i;
    }

    for(int i=0; i<n; i++){
        // for left contribution 
        while(!prev_smaller.empty() && arr[prev_smaller.top()]>arr[i]) prev_smaller.pop();
        left[i] = prev_smaller.empty() ? i+1 : i-prev_smaller.top();
        prev_smaller.push(i);

        // for right contribution 
        while(!next_smaller.empty() && arr[next_smaller.top()]>arr[i]){
            right[next_smaller.top()] = i - next_smaller.top();
            next_smaller.pop();
        }
        next_smaller.push(i);
    }

    for(int i=0; i<n; i++){
        sum = (sum + arr[i]*left[i]*right[i])%mod;
    }

    return sum;



    return sum;
}

int main(){
    int n; cin>>n;

    vector<int> arr;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        arr.push_back(ele);
    }

    cout<<sum_sub_array_mins(arr, n)<<endl;
    return 0;
}