#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int n){
   
   int flag = 0;
   
   for(int i=0; i<n; i++){

        int ele = arr[i];
        int reverse = 0;

        while(ele > 0){
            reverse = reverse*10 + ele%10;
            ele = ele/10;
        }

        if(reverse != arr[i]){
            flag = 1;
            break;
        }
   }

   if(flag){
    cout<<"NO";
   }
   else cout<<"YES";
}

int main(){

    int arr[] = {111,222,333,444,555} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    solve(arr,size);

    return 0;

}
