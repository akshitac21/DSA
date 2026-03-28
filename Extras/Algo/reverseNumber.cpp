#include <iostream>
using namespace std;

void reverseNum(int n){
    int revNum = 0;

    while(n>0){
        int lastDigit = n%10;

        n = n/10;

        revNum = (revNum*10) + lastDigit;
    }

    cout<<revNum;
}

int main(){
    int n;
    cin>>n;

    reverseNum(n);
}