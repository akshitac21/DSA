#include <iostream>
using namespace std;

void primeNum(int n){

    int count = 0;

    for(int i=0; i< sqrt(n); i++){
        if(n%i == 0){
            count++;
            if((n/i) != i){
                count++;
            }
        }
    }
    if(count == 2) cout<<"prime";
    else cout<<"Not prime";

}


int main(){
    int n;
    cin>>n;

    primeNum(n);
}