#include <iostream>
#include <set> //BST
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6); //no repetitions, once 6 will be printed
    s.insert(0);

    for(auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); 

    for(auto i:s)
    {
        cout<<i<<endl;
    }

    cout<<"-5 is present or not "<<s.count(-5)<<endl; //checks if element is there or not

    set<int>::iterator itr = s.find(5); //returns the iterator

    //cout<<"Value present at itr -> "<<*itr<<endl;

    for(auto it = itr; it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

}
