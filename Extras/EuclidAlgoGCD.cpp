#include <bits/stdc++.h>
using namespace std;

int gcd_value(int x, int y){
    if(x==0) return y;
    if(y==0) return x;

    while(x!=y){
        if(x>y) x-=y;
        else y-=x;
    }
    return x;
}


int main(){
    cout<<"Euclid Algorithm for finding the greatest common divisor of two numbers"<<endl;
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int gcd = __gcd(a,b); // inbuilt function

    cout<<"Greatest common divisor of "<<a<<" and "<<b<<" is "<<gcd<<endl;

    int x, y;
    cout<<"Enter two numbers: ";
        cin>>x>>y;
    int gcd2 = gcd_value(x,y);

    cout<<"Greatest common divisor of "<<x<<" and "<<y<<" is "<<gcd2<<endl;

    return 0;
}