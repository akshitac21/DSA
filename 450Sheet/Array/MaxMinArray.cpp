#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findmax(vector<int>& arr, int n){
    int maxi = INT_MIN;
    
    for(int i=0; i<n; i++){
        maxi = max(arr[i], maxi);
    }

    return maxi;

}

int findmin(vector<int>& arr, int n){
    int mini = INT_MAX;
    
    for(int i=0; i<n; i++){
        mini = min(arr[i], mini);
    }

    return mini;

}

void solve(vector<int>& arr, int n){
    int mini = findmin(arr,n);
    int maxi = findmax(arr,n);

    cout<<"Min: "<<mini<<" Max: "<<maxi<<endl;
}
 
int main(){
 
    vector<int>arr = {7,4,3,2,9};
    int size = arr.size();
    solve(arr,size);
 
    return 0;
 
}