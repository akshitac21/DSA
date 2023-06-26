#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int n, int m){

    //sort the array
    sort(arr,arr+n);

    long long mindiff = INT_MAX;

    for(int i=0; i<=n-m; i++){
        long long diference = arr[i+m-1]-arr[i];
        mindiff = min(mindiff,diference);
    }

    cout << mindiff << endl;
}

int main(){

    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int m = 5;
    solve(arr,size,m);

    return 0;

}
