#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(100); 
    v.push_back(112);
    v.push_back(3);
    v.push_back(41);
    v.push_back(15);
    v.push_back(61);

    int n = v.size();

    sort(v.begin(),v.end()); //intro sort: quick, heap, insertion sort
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Finding 3->"<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"lower_bound "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper_bound "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=89;
    int b=77;

    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;

    cout<<"max element iterator "<<max_element(v.begin(),v.end())-v.begin()<<endl;
    
    auto it = max_element(v.begin(),v.end());
    cout<<"max element "<<*it<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;
    
     rotate(v.begin(),v.begin()+1,v.end());
     cout<<"After rotate "<<endl;
     for(auto i:v){
        cout<<i<<" ";
     }

        return 0;
}
