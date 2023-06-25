#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int jumps = 0;
    int farthest = 0;
    int current = 0;

    for(int i=0; i<=n-1; i++){
        farthest = max(farthest, i+arr[i]);

        if(i==current){
            jumps++;
            current = farthest;
        }
    }

    if(current >= n-1){
        cout<<jumps<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
 
int main(){
 
    int arr[] ={1, 4, 3, 2, 6, 7};
    int n1 = sizeof(arr)/sizeof(arr[0]);

    solve(arr, n1);
 
    return 0;
 
}
