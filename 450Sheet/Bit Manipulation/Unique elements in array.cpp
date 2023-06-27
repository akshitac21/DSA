#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> & arr){
    
    int n = arr.size();
    int xo=0;
    for(auto i : arr){
        xo ^= i; // with itself = 0, leavig xor of the unique numbers;
    }

    int p=0;
    int q=0;
    int bit = xo&(~(xo-1)); //flips right bit to LSB

    for(int i=0; i<(n); i++){
        if((bit & arr[i]) != 0) p^=arr[i];
        else q^=arr[i];
    }

    return {min(p,q),max(p,q)};


}

int main(){

    vector<int>arr= {1,2,3,4};
    vector<int> ans = solve(arr);

    for(auto i : ans){
        cout<<i;
    }

    return 0;

}
