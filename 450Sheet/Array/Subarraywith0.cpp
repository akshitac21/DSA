#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Compare{
   public:
      bool operator()(int a, int b){
         return a==b;
      }
};

void solve(vector<int>& A, int n){
   //find subarray equal to 0;
   unordered_map<int,int>mp;
   int sum = 0;

   for(int i=0; i<n; i++){
      sum += A[i];

      if(sum == 0){
         cout<<"YES"<<endl;
         break;
      }
      if(mp.find(sum) != mp.end()){
         cout<<"YES"<<endl;
         break;
      }
      mp[sum]++;
   }
   
   /*
   The condition if(mp.find(sum) != mp.end()) checks if the current prefix sum sum exists in the unordered_map mp. If it does, it means that there exists a subarray in the input array A whose sum is zero.

In this case, the code outputs "YES" to indicate that such a subarray with a sum of zero has been found. This is because encountering the same prefix sum again indicates that the subarray between the two occurrences of the same prefix sum has a sum of zero.

The break statement is used to exit the loop and stop further processing since the problem requires finding just one subarray with a sum of zero.
*/
 
}

int main(){
    
    
   vector<int> A = {4,2,-3,1,6};
   int n = 5; 
    solve(A,n);

    return 0;

}
