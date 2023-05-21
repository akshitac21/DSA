#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){ //last element not compared
        int minIndex = i; //min index to be compared 

        for(int j=i+1; j<n; j++){ //subsequent neighbors
            if(arr[j] < arr[minIndex]){
                minIndex = j; //if next index is less than i
            }
        }
        swap(arr[minIndex], arr[i]); //swap the minIndex with i
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={6,5,4,3,2,1,0};
    selectionSort(arr,7);
}