#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k){

    //sort the array
    sort(arr,arr+n);
    int minval = arr[0];
    int maxval = arr[n-1];

    for(int i=0; i<n; i++){
        if(arr[i]<k) continue;

        minval = min(arr[0]+k, arr[i]-k);
        maxval = max(arr[i-1]+k, arr[n-1]-k);
    }

    cout<<(maxval-minval)<<endl;

}

int main(){
    int arr[] = {1, 5, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    solve(arr,n,k);

    return 0;

}
