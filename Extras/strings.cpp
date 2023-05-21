#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s={"flower","flow","flight"};
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }cout<<endl;

    string first = s[0];
    int n  = s.size();
    string last = s[n-1];

    int mini = min(first.size(), last.size());
    cout<<mini<<endl;

    for(int i=0; i<mini; i++){
        cout<<"first["<<i<<"]"<<first[i]<<" last["<<i<<"]"<<last[i]<<endl;
    }
    return 0;

}