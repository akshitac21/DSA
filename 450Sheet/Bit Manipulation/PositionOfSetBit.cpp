#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 8;
    
    cout<<(!n || n&(n-1) ? -1 : log2(n)+1)<<endl;

}

//8
//1 0 0 0
//ans ; 4
