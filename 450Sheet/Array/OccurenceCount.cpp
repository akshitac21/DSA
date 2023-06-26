#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[], int n, int k){

    int x = n/k;

    unordered_map<int,int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto i : mp){
        if(i.second >x){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
    
}

int main(){

    int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    solve(arr,n,k);

    return 0;

}
