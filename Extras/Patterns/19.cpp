#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space = 0;
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<space; j++){
            cout<<" ";
        }

        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << "*";
        }
        space += 2;
        cout<<endl;
    }

    space = 8;

    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout<<endl;
    }
}