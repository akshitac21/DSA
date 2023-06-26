#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
   //int n = sizeof(arr)/sizeof(arr[0]);

   int start = 0;
   int end = n-1;

   while(start<end){
      arr[start] = arr[start]^arr[end];
      arr[end] = arr[start]^arr[end];
      arr[start] = arr[start]^arr[end];

      start++;
      end--;
   }
}
int main(){

   int arr[] = {3,2,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   //reverse(arr,n);

   int newele=0;
   //1 2 3
   for(int i=0; i<n; i++){
      int ele = arr[i];

      while(ele > 0){
         newele = newele*10 + ele%10;
         ele = ele/10;
      }
   }

   cout<<newele;

   return 0;

}
