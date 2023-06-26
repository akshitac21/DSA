#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int n, int x){
    //kadane algo;
    int i=0; 
    int j=0;
    int sum = 0;
    int count = n+1;

    while(i<n){
        sum+=arr[i];

        while(sum>x){
            count = min(count,i-j+1);
            sum -=arr[j++];
        }
        i++;
    }

    cout<<count;
}

int main(){

    int arr[] = {1, 4, 45, 6, 0, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 51;
    solve(arr,size,x);

    return 0;

}
