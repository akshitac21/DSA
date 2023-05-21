#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){ //4,12,11,20
    for(int i=1; i<n; i++){ //till n-1, starts from 12

        int temp = arr[i]; //front element; temp=12, temp=11,
        int j = i-1; //prev element; j=0, j=1

        for(; j>=0; j--){ //prev elements being compared <-
            if(arr[j] > temp){ //if the prev element is greater than temp
                //shift
                arr[j+1] = arr[j]; //4 !< 12 so break;
            }
            else break;
        }
        arr[j+1] = temp; //temp has been put in its place; arr[1]=12
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={6,5,4,3,2,1,0};
    insertionSort(arr,7);
}