#include <bits/stdc++.h>
bool checkDFS(int node, unordered_map<int,bool> &visited, unordered_map<int,bool>&dfsvisited, unordered_map<int,list<int>>&adj){
  visited[node] = true;
  dfsvisited[node]=true;

  for (auto neighbour : adj[node]) {
      if (!visited[neighbour] && checkDFS(neighbour, visited, dfsvisited, adj))
            return true;
      else if (dfsvisited[neighbour])
          return true;
    }

  dfsvisited[node] = false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  //create adjacency list
  unordered_map<int, list<int>> adj;
for (const auto& edge : edges) {
adj[edge.first].push_back(edge.second);
}

  //call dfs on all components
    unordered_map<int,bool>visited;
    unordered_map<int,bool> dfsvisited;
      for(int i=1; i<=n; i++){
        if(!visited[i] && checkDFS(i,visited,dfsvisited, adj) ){
            return true;
        }
      }

      return false;
}
