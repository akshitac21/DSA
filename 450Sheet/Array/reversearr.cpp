#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>& arr, int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void solve(vector<int>& arr){
    int n = arr.size();

    reverse(arr,n);

}
 
int main(){
 
    vector<int>arr = {1,2,3};

    solve(arr);

    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
 
    return 0;
 
}
