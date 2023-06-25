#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums, int size){
    //1,3,4,2,2
    unordered_map<int,int>mp;

    for(int i=0; i<size; i++){
        mp[nums[i]]++;
    }

    for(auto i :mp){
        if(i.second==2){
            cout<<i.first<<endl;
            break;
        }
    }
}

void solve2(vector<int>nums, int size){
    
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }

    cout<<nums[0]<<endl;
}

int main(){

    vector<int>nums = {1,3,4,2,2};
    solve(nums, nums.size());
    solve2(nums, nums.size());

    return 0;

}
