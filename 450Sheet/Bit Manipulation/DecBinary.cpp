#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //int n = ~n + 1;

    int ans = 0;
    int i=0;
    while(n){

        int bit = n&1; //rightmost bit

        ans += (bit*pow(10,i)); //append bit to result
        n = n>>1; //shift to right
        i++;
    }

    cout<<"\nAns: "<<ans;

    return 0;

}
