#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    
    //create
    map<string,int> m; //<key, value> pairs

    //insertion
    pair<string, int> p = make_pair("Zar", 1);
    m.insert(p);

    //insertion way 2
    pair<string,int> pair2("Hello",2);
    m.insert(pair2);

    //insertion way 3
    m["new"]=3; //can be updated if same key. Key is unique

    //search
    cout<<m["new"]<<endl; //if not present will create a new entry
    cout<<m.at("new")<<endl; //or any other string
    
    //if m.at("string") is not present, it will throw error
    //cout<<m.at("string")<<endl; throws error

    //to check if key is present
    cout<<m.count("world")<<endl; //returns 0

    //erase
    //m.erase("new");
    cout<<m.size()<<endl; //3 reduced to 2

    //iterator
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



}
