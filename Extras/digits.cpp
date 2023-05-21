#include <bits/stdc++.h>
using namespace std;

void digit(int n){
    if(n==0){
        return;
    }
    digit(n/10);
    cout<<n%10<<" "<<endl;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    digit(n);
}