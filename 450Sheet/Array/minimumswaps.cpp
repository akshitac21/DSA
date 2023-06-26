#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int n, int k){
   
   int count = 0;
   int other = 0;
   for(int i=0; i<n; i++) if(arr[i] <= k) count++;
   for(int i=0; i<count; i++) if(arr[i] > k) other++;
   
   int ans = other;
   for(int i=0; i<n-count; i++){
        if(arr[i+count] <= k && arr[i] > k) other--;
        else if(arr[i+count]>k && arr[i] <= k) other++;
        ans = min(ans, other);
   }

   cout<<ans;

}

int main(){

    int arr[] = {2, 1, 5, 6, 3} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    solve(arr,size,k);

    return 0;

}
