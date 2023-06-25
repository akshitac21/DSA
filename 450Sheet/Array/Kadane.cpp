#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Compare{
    public:
        bool operator()(int a, int b){
            return a > b;
        }
};

class Function{

    public:
        int kadane(int arr1[], int size){
            int current = 0;
            int maximum = INT_MIN;
            Compare compare;

            for(int i=0; i<size; i++){
                current += arr1[i];
                if(compare(current,maximum)){
                    maximum = current;
                }
            }

            return maximum;
        }

        void print(int value){
            cout<<value<<endl;
        }

};

void solve(int arr1[], int n1){
    Function object;

    int value = object.kadane(arr1,n1);
    object.print(value);
}
 
int main(){
 
    int arr1[] ={-1,-2,-3,-4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    solve(arr1, n1);
 
    return 0;
 
}
