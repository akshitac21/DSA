#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int n, int a, int b){
    /*
    1) All elements smaller than a come first.
    2) All elements in range a to b come next.
    3) All elements greater than b appear in the end.
    */

   vector<int>ans;
   for(int i=0; i<n; i++){
        if(arr[i] < a){
            ans.push_back(arr[i]);
        }
   }

   for(int i=0; i<n; i++){
        if(arr[i] >= a && arr[i] <= b){
            ans.push_back(arr[i]);
        }
   }

   for(int i=0; i<n; i++){
        if(arr[i] > b){
            ans.push_back(arr[i]);
        }
   }

   for(auto i : ans){
    cout<<i;
   }


}

int main(){

    int arr[] = {1, 2, 3, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int a = 1;
    int b = 2;
    solve(arr,size,a,b);

    return 0;

}
