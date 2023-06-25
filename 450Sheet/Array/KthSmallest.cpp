#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Compare{
    public:
        int operator()(int a, int b){
            return a > b;
        }
};

int solve(vector<int> arr, int k, int n){
    //using minheap
    priority_queue<int, vector<int>, Compare> pq;

    for(auto i : arr){
        pq.push(i);
    }

    int count = 0;
    int it;

    while(!pq.empty()){
        it = pq.top();
        pq.pop();

        count++;
        if(count == k){
            return it;
        } 
    }
    return it;
}


int solve2(vector<int> arr, int k, int n){
    //using minheap
    priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto i : arr){
            pq.push(i);
        }
        
        while(--k){
            pq.pop();
        }
        
        return pq.top();
}


 
int main(){
 
    vector<int>arr = {7,10,4,3,20,15};
    int k = 3;
    int n = arr.size();

    int ans = solve(arr,k,n);
    int res = solve2(arr,k,n);

    cout<<"solution: "<<ans<<endl;
    cout<<"solution2: "<<res<<endl;
 
    return 0;
 
}
