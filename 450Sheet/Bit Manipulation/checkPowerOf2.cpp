#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    return n!=0 && (n&(n-1))==0;
}

int main(){

    int n=5;
    cout<<solve(n)<<endl;

    return 0;

}
