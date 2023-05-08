#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key){ //go right
            s = mid+1;
        }
        else{ //key<arr[mid] go left
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < key){ //go right
            s = mid+1;
        }
        else{ //key<arr[mid] go left
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    cout<<"First occurence of 3: "<<firstOcc(arr, n, key)<<endl;
    cout<<"last occurence of 3: "<<lastOcc(arr, n, key)<<endl;

    return 0;
}
