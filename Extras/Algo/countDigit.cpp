#include <iostream>
using namespace std;

void countDigit(int n){
    // int count = 0;

    // while(n>0){
    //     //int lastDigit = n%10;
    //     count++;
    //     n = n/10;
    // }

    int count = (int)(log10)(n) + 1;

    cout<<count;
}

int main(){
    int n;
    cin>>n;

    countDigit(n);
}

//TC: O(log10(N)) -> since divisible by 10
//Number of iterations depennds on division -> logarithmic will come