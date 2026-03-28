//swap an array using swap in STL

#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int size){
    int start =0;
    int end = size-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[6]={1,2,3,4,5,6};

    rev(arr,6);
    print(arr,6);
}
