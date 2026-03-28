#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int digit(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+digit(n/10);
    
}

int main(){
    int n;
    cout<<"Enter the number: \n";
    cin>>n;
    cout<<"Number provided: \n"<<n;

    int ans = digit(n);

    cout<<"The sum of digits of "<<n<<" is "<<ans<<endl;
}