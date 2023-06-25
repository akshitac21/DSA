#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int merge(long long arr[], int start, int mid, int end){

    long long int cnt = 0;
    vector<long long int>temp;

    int i=start;
    int j=mid+1;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }

        else{
            cnt += mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=start; i<=end; i++){
        arr[i] = temp[i-start];
    }

    return cnt;
}

long long int mergesort(long long arr[], long long start, long long end){
    if(start>=end){
        return 0;
    }

    long long int count = 0;
    int mid = start + (end-start)/2;

    count+= mergesort(arr,start,mid);
    count+=mergesort(arr,mid+1,end);

    count+= merge(arr,start,mid,end);

    return count;
}

void solve(long long arr[], int n){
   long long int ans = mergesort(arr,0,n-1);
   cout<<"Answer: "<<ans<<endl;

   cout<<"Array: "<<endl;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
}

int main(){
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);

    return 0;

}
