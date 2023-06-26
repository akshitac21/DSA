#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n){
   vector<int> ans;
   ans.push_back(1);

   for(int i=2; i<=n; i++){
      int carry = 0;
      for(int j=0; j<ans.size(); j++){
         int digit = ans[j]*i + carry;
         ans[j] = digit%10;
         carry = digit/10;
      }

      while(carry){
         ans.push_back(carry%10);
         carry = carry/10;
      }
   }

   reverse(ans.begin(), ans.end());
   return ans;
}

int main(){
    
    int n =5;
    vector<int>res = solve(n);

    for(auto i : res){
      cout << i;
    }

    return 0;

}
