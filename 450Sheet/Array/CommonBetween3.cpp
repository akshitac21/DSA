#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Compare{
   public:
      bool operator()(int a, int b){
         return a==b;
      }
};

void solve(vector<int>& A, vector<int>& B,vector<int>& C, int n1, int n2, int n3){
   //find common element between A and B
   unordered_set<int> set;
   vector<int>ans;
   
   for(int i=0; i<n1; i++){
      set.insert(A[i]);
   }

   for(int i=0; i<n2; i++){
      if(set.count(B[i])){
         ans.push_back(B[i]);
         set.erase(B[i]);
      }
   }

   for(int i=0; i<n3; i++){
      if(set.count(C[i])){
         ans.push_back(C[i]);
         set.erase(C[i]);
      }
   }

   for(auto i : ans){
      cout<<i<<" ";
   }cout<<endl;
}

int main(){
    
   int n1 = 6; 
   vector<int> A = {1, 5, 10, 20, 40, 80};
   int n2 = 5; 
   vector<int> B = {6, 7, 20, 80, 100};
   int n3 = 8; 
   vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    solve(A,B,C,n1,n2,n3);

    return 0;

}
