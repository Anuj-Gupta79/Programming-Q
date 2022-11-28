// Level :- Medium 

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches){
    vector<vector<int>> ans;
    vector<int> not_lost, one_lost;

    int n = matches.size();

    map<int, int> looser;

    for(int i=0; i<n; i++) looser[matches[i][0]]=0;
    for(int i=0; i<n; i++) looser[matches[i][1]]++;

    for(auto it : looser){
        if(it.second == 0) not_lost.push_back(it.first);

        if(it.second == 1) one_lost.push_back(it.first);
    }

    ans.push_back(not_lost);
    ans.push_back(one_lost);

    return ans;
}

int main(){
    int n; cin>>n;

    vector<vector<int>> matches;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<2;j ++){
            int x; cin>>x;
            temp.push_back(x);
        }
        matches.push_back(temp);
    }

    vector<vector<int>> ans = findWinners(matches);

    for(auto it : ans){
        for(auto it1 : it) cout<<it1<<" ";
        cout<<endl;
    }

    return 0;
}