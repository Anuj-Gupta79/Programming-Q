// Level :- Hard 

#include<bits/stdc++.h>
using namespace std;

// This code give TLE for large constraints 
// bool arithematic(vector<int> temp){
//     int m = temp.size();

//     if(m<3) return false;

//     int diff = abs(temp[0]-temp[1]);
//     for(int i=1; i<m-1; i++){
//         if(diff != abs(temp[i]-temp[i+1])) return false;
//     }

//     return true;
// }

// vector<vector<int>> sub_sequence;
// void sequence(vector<int>& arr, vector<int> temp1, int index, int n){
//     if(index == n) {
//         sub_sequence.push_back(temp1);
//         return;
//     }

//     temp1.push_back(arr[index]);
//     sequence(arr, temp1, index+1, n);
//     temp1.pop_back();
//     sequence(arr, temp1, index+1, n);
// }


// int numberOfArithematicSlices(vector<int>& arr){
//     int n = arr.size();
//     if(n < 3) return 0;
    
//     int count = 0;
//     vector<int> temp1;

//     sequence(arr, temp1, 0, n);
    
//     for(auto it : sub_sequence){
//         if(arithematic(it)) count++;
//     }

//     return count;
// }

int numberOfArithematicSlices(vector<int>& nums){
    int count = 0; 
    int n = nums.size();

    if(n<3) return 0;

    vector<unordered_map<long, long>> arr(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            long diff = (long)(nums[i] - nums[j]);

            auto it = arr[j].find(diff);

            int cnt = it == end(arr[j]) ? 0 : it->second;

            arr[i][diff] += cnt+1;

            count += cnt;
        }
    }
    return count;
}

int main(){
    int n; cin>>n;
    vector<int> nums;

    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele);
    }

    cout<<numberOfArithematicSlices(nums);
    return 0;
}