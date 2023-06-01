#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n];
    cout<<"Enter number"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    int arr2[n];

    for(int i=0; i<5; i++){
        arr2[i]=arr[i];
    }

    //memcpy(arr2, arr, n*sizeof(int))

    reverse(arr2, arr2+n);

    cout<<"Array1"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }

    cout<<"\nReverse Array1"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr2[i];
    }

    bool set = true;
    
    for(int i=0; i<5; i++){
        if(arr2[i]!=arr[i]){
            set = false;
            break;
        }
    }

    if(set==true){
        cout<<"\nPallindrome"<<endl;
    }
    else{
        cout<<"\nNot Pallindrome"<<endl;
    }
    
}
