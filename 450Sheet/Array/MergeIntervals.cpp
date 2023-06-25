#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& intervals){
    
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> res;

    for(int i=0; i<n; i++){
        if(i==n-1){
            res.push_back(intervals[i]);
        }

        else if(intervals[i][1] >= intervals[i+1][0]){
            intervals[i+1][0] = intervals[i][0];
            intervals[i+1][1] = max(intervals[i][1], intervals[i+1][1]);
        }
        else{
            res.push_back(intervals[i]);
        }
    }

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout <<"{ "<< res[i][j] <<"} ";
        }
    }
}


int main(){

    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    solve(intervals);

    return 0;

}
