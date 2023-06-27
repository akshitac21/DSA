#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int N){
    int count=0;
        int ans = 0;
        int one = 0;
        int num = N;
        
        while(N>0){
            if(N%2==1){
                one++;
            }
            N/=2;
        }
        
        int k = one;
        N=num;
        
        while(N>0){
            if(N%2==1){
                one--;
                cout<<count<<endl;
                ans+= ((one*pow(2,count)) + (count*pow(2,count-1)));
            }
            count++;
            N/=2;
        }
        
        return ans+k;
}

int main(){

    int n=5;
    cout<<solve(n)<<endl;

    return 0;

}
