#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m){
    int arr3[n+m];
    int total = n+m;

    for(int i=0; i<n;i++){
        arr3[i]=arr1[i];
    }

    for(int i=0; i<m; i++){
        arr3[n+i]=arr2[i];
    }

    sort(arr3, arr3+total);

    int median = 0;
    if(total%2==0){
        median = (arr3[total/2]+arr3[(total/2)-1])/2;
    }
    else{
        median = arr3[total/2];
    }

    cout<<median<<endl;
}


int main(){

    int arr1[] = { -5, 3, 6, 12, 15 };
    int arr2[] = { -12, -10, -6, -3, 4, 10 };
 
    int i = sizeof(arr1) / sizeof(arr1[0]);
    int j = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1,arr2, i, j);

    return 0;

}
