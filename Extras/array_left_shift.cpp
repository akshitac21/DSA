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
        temp = a[0]; //store the first element of the array

    for(i=0; i<N-1; i++)
    {
        a[i]=a[i+1];
    }

    a[N-1] = temp;

    shift--;


    }

    /*
    temp = a[0]; //store the first element of the array

    for(i=0; i<N-1; i++)
    {
        a[i]=a[i+1];
    }

    a[N-1] = temp;
    */

    cout<<"Shifted elements: \n"<<endl;
    for(i=0; i<N; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;


}
