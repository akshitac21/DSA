#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[],int size, int x){

    unordered_set<int>set;
    int flag = 0;

    for(int i=0; i<size-2; i++){
        int target = x-arr[i];
        set.clear();

        for(int j=i+1; j<size; j++){
            if(set.find(target-arr[j]) != set.end()){
                flag = 1;
                break;
            }
            set.insert(arr[j]);
        } 
    }

    if(flag) cout<<"YES";
    else cout<<"NO";
    
}

/*
    void solve(int arr[],int size, int x){

    unordered_set<int>set;
    int flag = 0;

    for(int i=0; i<size-2; i++){
        int start=i+1;
        int end = size-1;

        while(start<end){
            int sum = arr[i]+arr[start]+arr[end];

            if(sum==x){
                flag = 1;
                break;
            }
            else if(sum < x){
                start++;
            }
            else{
                end--;
            }
        }
    }

    if(flag) cout<<"YES";
    else cout<<"NO";


    
}

*/

int main(){

    int arr[] = {1,4,45,6,10,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 13;
    solve(arr,size,x);

    return 0;

}
