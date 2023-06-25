#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums,vector<int>&nums2, int size, int size2){
    int left = size-1;
    int right = 0;

    while(left>=0 && right<size2){
        if(nums[left]>nums2[right]){
            swap(nums[left],nums2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }

    cout<<"Nums: "<<endl;
    for(auto i : nums){
        cout << i <<" ";
    }cout << endl;

     cout<<"Nums2: "<<endl;
    for(auto i :nums2){
        cout<<i<<" ";
    }cout<<endl;

    sort(nums.begin(),nums.end());
    sort(nums2.begin(),nums2.end());

    for(auto i : nums2){
        nums.push_back(i);
    }

    cout<<"Answer: "<<endl;
    for(auto i : nums){
        cout<<i<<" ";
    }cout<<endl;
}


int main(){

    vector<int>nums = {1, 4, 8, 10};
    vector<int>nums2= {2, 3, 9};
    solve(nums, nums2, nums.size(),nums2.size());

    return 0;

}
