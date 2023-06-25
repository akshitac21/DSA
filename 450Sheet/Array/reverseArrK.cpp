#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int nums[], int start, int end){

    while(start <= end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
 
int main(){
 
    int arr[] = {1,2,3,4,5};

    int N = sizeof(arr)/sizeof(arr[0]);

    int k = 2;
    k = k%N;

    //right shift K times
    reverse(arr,0,N-1);
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

    reverse(arr, 0, k-1);
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

    reverse(arr, k, N-1);
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
 
}
