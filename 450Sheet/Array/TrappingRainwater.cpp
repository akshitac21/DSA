#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int n){

    vector<int>left(n);
    vector<int>right(n);

    left[0]=arr[0];
    right[n-1]=arr[n-1];

    for(int i=1; i<n; i++){
        left[i] = max(arr[i], left[i-1]);
        right[n-i-1] = max(arr[n-i-1], right[n-i]);
    }

    long long ans = 0;

    for(int i=0; i<n; i++){
        ans += min(left[i], right[i]-arr[i]);
    }

    cout<<ans;
}

int main(){

    int arr[] = {3,0,0,2,0,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    solve(arr,size);

    return 0;

}
