#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Function{
    public:
        void rotatearray(int arr[], int start, int end){
            while(start<=end){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }

        void print(int arr1[], int n1){
            for(int i=0; i<n1; i++){
                cout<<arr1[i]<<" ";
            }cout<<endl;
        }

};

void solve(int arr1[], int n1, int k){
    Function object;

    int rotate = k%n1;

    object.rotatearray(arr1,0,n1-1);
    object.rotatearray(arr1,0,rotate-1);
    object.rotatearray(arr1,rotate,n1-1);

    object.print(arr1,n1);
}
 
int main(){
 
    int arr1[] ={1,2,3,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int k = 1;

    solve(arr1, n1,k);
 
    return 0;
 
}
