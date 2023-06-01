#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Find exponent of a number\n"<<endl;
    int a, b;
    cout<<"Enter base number: ";
        cin>>a;
    cout<<"Enter exponent: ";
        cin>>b;
    int i = 1;
    int ans = 1;
    while(i<=b){
        ans = ans*a;
        i++;
    }

    cout<<ans<<endl;

    cout<<"Another method: "<<endl;

    int ans1 = 1;
    
    while(b>0){
        if(b&1){ //if b is odd
            ans1 = ans1*a;
        }
        //if b is even
        a = a*a; //(a^2)
        b = b>>1; //(b/2)
    }
    cout<<ans1<<endl;
    return 0;
}
