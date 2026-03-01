#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int i=0; i<input; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        //star
        for(int j=0; j<2*input-(2*i+1); j++){
            cout<<"*";
        }

        //space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}