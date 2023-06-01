#include <iostream>
using namespace std;
#define N 5

int main()
{
    int a[N], i, temp, shift;

    cout<<"Enter 5 elements: \n"<<endl;
    for(i=0; i<N; i++)
    {
        cin>>a[i];
    }

    cout<<"How many times to shift? "<<endl;
    cin>>shift;

    while(shift!=0)
    {
        temp = a[N-1]; //store the last element of the array

    for(i=N-1; i>0; i--)
    {
        a[i]=a[i-1];
    }

    a[0] = temp;

    shift--;


    }

    cout<<"Shifted elements: \n"<<endl;
    for(i=0; i<N; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;

// 1 2 3 4 5
// 5 1 2 3 4

}
