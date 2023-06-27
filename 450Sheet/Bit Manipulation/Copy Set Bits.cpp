#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(unsigned &x, unsigned y, unsigned l, unsigned r){
    if(l<1 || r>32){
        return;
    }

    for(int i=l; i<=r; i++){

        int mask = 1 << (i-1);

        if(y&mask){
            x = x|mask;
        }
    }
}

int main(){

    unsigned x=10;
    unsigned y=13;
    unsigned l = 2;
    unsigned r = 3;
    
    solve(x,y,l,r);

    cout<<x<<endl;

}
