#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1); //size is 5, initializes all 5 elemets with 1
    vector<int> last(a); //copies all the elements of a into last vector

     cout<<"Print last "<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    }

    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size ->"<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
}
