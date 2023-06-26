#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[], int n){

    unordered_set<int>set;
    for(int i=0; i<n; i++){
        set.insert(arr[i]);
    }

    int ans = 0;
    int count = 0;

    for(int i=0; i<n; i++){

        if(set.find(arr[i]+1)==set.end()){
            count =1;

            while(set.find(arr[i]+count)!= set.end()){
                count++;
            }
        }

        ans = max(ans,count);
    }

    cout << ans;
    
    
}

int main(){

    int arr[] = {2,6,1,9,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);

    return 0;

}

/////////////////////////////////////////////////////////////

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[], int n){

    set<int> set;

    for(int i=0; i<n; i++){
        set.insert(arr[i]);
    }

    int ans=0;
    int count = 0;

    for(auto i : set){

        if(set.count(i-1)){
            count++;
        }
        else{
            count = 1;
        }

        ans = max(count,ans);
    }
    
    cout<<ans;
    
}

int main(){

    int arr[] = {2,6,1,9,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);

    return 0;

}
