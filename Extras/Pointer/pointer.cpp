#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    cout<<n<<endl;
    cout<<&n<<endl;

    int *p = &n; //p points to the address of n
    cout<<"Pointer *p = &n \n";
    cout<<"p "<<p<<endl; ///address of n
    cout<<"&p "<<&p<<endl; 
    cout<<"*p "<<*p<<endl;
    cout<<"&*p "<<&*p<<endl;
    cout<<"&n "<<&n<<endl;

    cout<<"********************************\n"<<endl;

    int i = 15;
    int *pt = 0;
    pt = &i;

    cout<<"&i: "<<&i<<endl;
    cout<<"pt: "<<pt<<endl;
    cout<<"&pt: "<<&pt<<endl;
    cout<<"*pt: "<<*pt<<endl;
    cout<<"&*pt: "<<&*pt<<endl;
    cout<<"*&pt: "<<*&pt<<endl;


}
