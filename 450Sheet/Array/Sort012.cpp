#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n){
    int zero= 0;
    int one = 0;
    int two = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else if(arr[i]==2){
            two++;
        }
    }

    int index = 0;
    while(zero--){
        arr[index++]=0; 
    }
    while(one--){
        arr[index++]=1;
    }
    while(two--){
        arr[index++]=2;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

}
 
int main(){
 
    int arr[] = {0,2,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr,n);
 
    return 0;
 
}
