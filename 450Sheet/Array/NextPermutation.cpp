#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums){

    int n = nums.size();
    int index = -1;

    //from the 2nd last to check the next greater element on its right
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }

    //reverse the array from the end till index
    for(int i=n-1; i>=index && index != -1; i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
        }
    }

    reverse(nums.begin()+index+1, nums.end());
   
}


int main(){

    vector<int> nums = {1,1,5};
    solve(nums);

    for(auto i: nums){
        cout<<i<<" ";
    }cout<<endl;

    return 0;

}
