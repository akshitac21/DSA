#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int solve(int n){
   if(n==0){
      return 1;
   }

   long long ans = n*solve(n-1);
   return ans;
}

int main(){
    
    int n =5;
    long long int res = solve(n);
    cout<<res<<endl;

    return 0;

}
