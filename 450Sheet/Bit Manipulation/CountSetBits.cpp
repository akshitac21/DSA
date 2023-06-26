#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int count =0;
    while(n){
        count+=n&1;
        n>>=1;
    }
    cout<<count;
}

int main(){

    int n;
    cin>>n;
    solve(n);

    return 0;

}
