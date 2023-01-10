//Doubly linked list
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int>l;
    //list<int> a(l); //copies all elements of l

    list<int>n(5,100);
    for(int i:n)
    {
        cout<<i<<" "<<endl;
    }


    l.push_back(1);
    l.push_front(2);

    for(int i:l) //erase time complexity is O(n)
    {
        cout<<i<<" ";
    }

    l.erase(l.begin());
    cout<<"\nAfter erase: "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<"\nsize of list: "<<l.size()<<endl;
}
