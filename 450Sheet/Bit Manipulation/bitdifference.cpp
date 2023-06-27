#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m){
    int count =0;
    int flips = n^m;
    while(flips){
        count+=flips&1;
        flips>>=1;
    }
    cout<<count;
}

int main(){

    int n, m;
    cin>>n>>m;
    solve(n, m);

    return 0;

}
