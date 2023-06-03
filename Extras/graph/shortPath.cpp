#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<pair<int,int>>> adj;

        void addEdge(int u, int v, int weight){
            pair<int,int> p = make_pair(v,weight);
            adj[u].push_back(p);
        }

        void printAdj(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j: i.second){
                    cout<<"("<<j.first<<","<<j.second<<"), ";
                }cout<<endl;
            }
        }

        void dfs(int node, unordered_map<int,bool>&vis, stack<int> &topo){
            vis[node] = true;

            for(auto neighbour : adj[node]){
                if(!vis[neighbour.first]){
                    dfs(neighbour.first, vis,topo);
                }
            }

            topo.push(node);
        }

        void getShortestPath(int src, vector<int> &dist, stack<int> &topo){
            dist[src] = 0;

            while(!topo.empty()) {
                int top = topo.top();
                topo.pop();

                if(dist[top]!= INT_MAX){
                    for(auto i: adj[top]){
                        if(dist[top] + i.second < dist[i.first]){
                            dist[i.first] = dist[top]+i.second;
                        }
                    }
                }
            }
       }
};

int main(){
    Graph g;

    int u, v, weight;
    char choice;

    do {
        cout << "Enter source vertex, destination vertex, and weight of the edge: \n";
        cin >> u >> v >> weight;
        g.addEdge(u, v, weight);

        cout << "Do you want to add another edge? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Adjacency List:\n";

    g.printAdj();

    //topological sort
    int n = 6;
    unordered_map<int, bool>visited;
    stack<int> s;
    for(int i =0; i<n; i++){
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
     }

     int src = 1;
     vector<int> dist(n);

     for(int i=0; i<n; i++){
        dist[i] = INT_MAX;
     }

     g.getShortestPath(src,dist,s);

     cout<<"Answer is: "<<endl;

    for(int i=0; i<dist.size(); i++){
        cout<<dist[i]<<" ";
    } cout<<endl;

    return 0;
}
