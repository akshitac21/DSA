#include <iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    int count = 1;

    for(int i=0; i<input; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
        }
        cout<<endl;
        count++;
    }

    return 0;
}