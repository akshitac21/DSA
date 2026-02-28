#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    // for(int i=0; i<n; i++){
    //     for(char ch='E'-i; ch<='E'; ch++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        char start = 'A' + n - i;
        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}