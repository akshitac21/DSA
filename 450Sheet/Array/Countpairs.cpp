#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k){
   sort(arr, arr+n);
   int count = 0;
   int i=0;
   int j=n-1;

   while(i<=j){
    if(arr[i]+arr[j]==k){
        count++;
        i++;
    }
    else if (arr[i]+arr[j]<k){
        i++;
    }
    else{
        j--;
    }
   }

   cout<<"Count: "<<count<<endl;   
}

int main(){
    int arr[] = {1, 5, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    solve(arr,n, k);

    return 0;

}
