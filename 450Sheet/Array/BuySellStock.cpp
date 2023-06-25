#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
   //kadane's algorithm
   int current = 0;
   int profit = 0;

   for(int i=1; i<n; i++){
        current = max(0, current+=arr[i]-arr[i-1]);
        profit  = max(current, profit);
   }

   cout<<"Profit: "<<profit<<endl;
}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);

    return 0;

}
