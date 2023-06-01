#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n-1; //n is size of array

    int mid = start + ((end-start)/2); //(start+end)/2;

    while(start <= end){    //start should always be less than end
        if(arr[mid] == key){ //compare key with mid
            return mid;
        }
        //go to right of the array
        else if(arr[mid] < key){ // if key is greater than mid, go to right
            start = mid+1;
        }
        else{ //if key is less than mid, go to left
            end = mid-1;
        }
        
        mid = start + ((end-start)/2); //update mid position
    }

    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;

    cout << binarySearch(arr, n, key)<<endl;

    return 0;
}
