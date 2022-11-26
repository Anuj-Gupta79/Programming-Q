// Level :- Hard

#include<bits/stdc++.h>
using namespace std;

int t[50001];
int n;

int idx(vector<vector<int>>& job, int l, int end){
    int r = n-1;

    int index = n+1;

    while(l<=r){
        int mid = l + (r-l)/2;
        if(end <= job[mid][0]){
            index = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    return index;
}

int solve(vector<vector<int>>& job, int i){
    if(i>=n) return 0;

    if(t[i] != -1) return t[i];

    int next_time = idx(job, i+1, job[i][1]);
    int selected = job[i][2] + solve(job, next_time);
    int not_selected = solve(job, i+1);

    return t[i] = max(selected, not_selected);
}

int job_scheduling(vector<int>& start_time, vector<int>& end_time, vector<int>& profit){
    int n = start_time.size();

    memset(t, -1, sizeof(t));

    vector<vector<int>> job;

    for(int i=0; i<n; i++){
        job.push_back({start_time[i], end_time[i], profit[i]});
    }

    sort(job.begin(), job.end());

    return solve(job, 0);
}

int main(){
    cin>>n;

    vector<int> start_time, end_time, profit;

    for(int i=0; i<n; i++){
        int s; cin>>s;
        start_time.push_back(s);
    }

    for(int i=0; i<n; i++){
        int e; cin>>e;
        end_time.push_back(e);
    }

    for(int i=0; i<n; i++){
        int p; cin>>p;
        profit.push_back(p);
    }

    cout<<job_scheduling(start_time, end_time, profit);

    return 0;
}