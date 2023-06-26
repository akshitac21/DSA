#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int>&arr, int n){

    ll maxproduct = arr[0];
    ll currmax = arr[0];
    ll currmin = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]<0){
            swap(currmax, currmin);
        }

        currmax = max(static_cast<ll>(arr[i]), currmax*arr[i]);
        currmin = min(static_cast<ll>(arr[i]), currmin*arr[i]);

        maxproduct = max(maxproduct, currmax);
    }

    cout << maxproduct;
}

int main(){

    vector<int>arr = {6, -3, -10, 0, 2};
    int n = arr.size();
    solve(arr,n);

    return 0;

}
