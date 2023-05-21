#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int n){
    int left =0, right =n-1;
    int step=0;

    while(left<right){

        cout<<"Step: "<<step++<<endl;
        printArray(arr, n); cout<<endl;
        
            while(left<right && arr[left]==0){ //left<right imp
                left++;
                }
            while(left<right && arr[right]==1){
                            right--;
                            }
            if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
            }
    }
}

int main(){
    int arr[8]={1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    cout<<"Sorted array: "<<endl;
    printArray(arr,8);

}