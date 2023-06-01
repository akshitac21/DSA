#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    bool swapped;
    for(int i=1; i<n; i++){ //1,2,3,4,--(n-1)
        //round 1 to n-1
        swapped = false;

        for(int j=0; j<n-i; j++){ 
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }

        if(swapped==false){ //optimization, O(n)
            //already sorted
            break;
        }
    }
    
    if(swapped==false){
        cout<<"Already Sorted initially"<<endl; //optimization
    printArr(arr, n);
    }
    else{
        cout<<"Not Sorted initially, now sorted"<<endl; //optimization
        printArr(arr, n);
    }
}

/*
j->
    0 to <(n-1)
    0 to <(n-2)
    0 to <(n-3)
    ;
    */

/*
for(int i=1; i<n; i++){
    //for round 1 to n-1

    for(int j=0; j<n-1; j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
*/

int main(){
    int arr[10]={9,8,7,0,1,2,3,4,5,6};
    bubbleSort(arr,10);

}
