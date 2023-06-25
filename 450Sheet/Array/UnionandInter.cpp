#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Compare{
    public:
        bool operator()(int a, int b){
            return a==b;
        }
};

void findunion(int arr1[], int arr2[], int n1, int n2){
    set<int>s;
    for(int i=0; i<n1; i++){
        s.insert(arr1[i]);
    }

    for(int i=0; i<n2; i++){
        s.insert(arr2[i]);
    }

    cout<<"Union: "<<endl;
    for(auto i : s){
        cout << i <<" ";
    }
}

void findinter(int arr1[], int arr2[], int n1, int n2){
    Compare compare;
    vector<int>ans;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(compare(arr1[i],arr2[j])){
                ans.push_back(arr1[i]);
            }
        }
    }

    cout<<"\nInter: "<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }cout<<endl;
}

void findinter2(int arr1[], int arr2[], int n1, int n2){
    unordered_set<int>s;
    vector<int>ans;

    for(int i=0; i<n1; i++){
        s.insert(arr1[i]);
    }

    for(int i=0; i<n2; i++){
        if(s.count(arr2[i])){
            ans.push_back(arr2[i]);
            s.erase(arr2[i]);
        }
    }

    cout<<"\nInter: "<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }cout<<endl;

}

void solve(int arr1[], int arr2[], int n1, int n2){
    findunion(arr1, arr2, n1, n2);
    findinter(arr1, arr2, n1, n2);
    findinter2(arr1, arr2, n1, n2);
}
 
int main(){
 
    int arr1[] ={1,2,3,4,5};
    int arr2[] = {1,2,3};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    solve(arr1,arr2, n1, n2);
 
    return 0;
 
}
