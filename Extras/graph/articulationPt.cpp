#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

void dfs(int node, int parent, vector<int>&disc, vector<int>&low, 
unordered_map<int,bool>&vis, unordered_map<int,list<int>>&adj, vector<int> &ap, int &timer){

vis[node] = true;
disc[node] = low[node]=timer++;
int child = 0;

for(auto nbr : adj[node]){
    if(nbr == parent){
        continue;
    }
    if(!vis[nbr]){
        dfs(nbr, node, disc, low, vis, adj, ap, timer);
        low[node] = minimum(low[node], low[nbr]);
        //check articulation point
        if(low[nbr] >= disc[node] && parent != -1){
            ap[node] = 1;
        }
        child++;
    } 
    else{
        //backedge
        low[node] = minimum(low[node], disc[nbr]);
    }
    if(parent == -1 && child>1){
        ap[node] = 1;
    }

    }
}


int main(){
    int n=5;
    int e=5;
    //cin>>n>>e;
    vector<pair<int,int>> edges;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    // cout<<"Enter edges in format of source and destination"<<endl;
    // for(int i=0; i<e; i++){
    //     int source, destination;
    //     cin>> source >> destination;
    //     edges.push_back(make_pair(source,destination));
    // }

    //adj list
    unordered_map<int,list<int>> adj;

    for(int i=0; i<edges.size(); i++){
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }

    //printing adj list
    // for (auto pair : adj) {
    //     cout << "Adjacency list of vertex " << pair.first << ": ";
    //     for (auto adjacentVertex : pair.second) {
    //         cout << adjacentVertex << " ";
    //     }
    //     cout << endl;
    // }

    int timer = 0;
    vector<int> disc(n, -1);
    vector<int> low(n, -1);
    unordered_map<int, bool> vis;
    vector<int> ap(n,0);

    //call dfs
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,-1, disc,low,vis,adj,ap,timer);
        }
    }

    //print articulation point
    cout<<"The articulation point are as follows: "<<endl;
    for(int i=0; i<n; i++){
        if(ap[i]!=0){
            cout<<i<<" ";
        }
    }cout<<endl;
}
