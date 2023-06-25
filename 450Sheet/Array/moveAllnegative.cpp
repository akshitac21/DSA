#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){

    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            if(i != index){
                swap(arr[i],arr[index]);
            }
            index++;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }cout<<endl;
}
 
int main(){
 
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr,n);
 
    return 0;
 
}
