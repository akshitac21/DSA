#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[], int arr2[], int size, int size2){

    unordered_set<int>set1;
    //unordered_set<int>set2;

    for(int i=0; i<size2; i++){
        set1.insert(arr2[i]);
    }

    for(int i=0; i<size; i++){
        if(set1.count(arr[i])){
            set1.erase(arr[i]);
        }

        if(set1.empty()){
            cout<<"YES!"<<endl;
            break;
        }
    }

    if(!set1.empty()){
        cout<<"NO!"<<endl;
    }


    
}

int main(){

    int arr[] = {10, 5, 2, 23, 19};
    int arr2[] = {19, 5, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    solve(arr,arr2,size,size2);

    return 0;

}
