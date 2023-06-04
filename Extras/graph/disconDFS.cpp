#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Perform DFS traversal starting from a given vertex
void dfs(const std::vector<std::vector<int>>& graph, int start, std::vector<bool>& visited) {
    stack<int> stack;
    stack.push(start);
    visited[start] = true;

    while (!stack.empty()) {
        int current = stack.top();
        stack.pop();

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                stack.push(neighbor);
            }
        }
    }
}

// Check if the graph is connected
bool isConnected(const std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);

    // Find the first non-empty vertex list
    int start;
    for (start = 0; start < numVertices; ++start) {
        if (!graph[start].empty())
            break;
    }

    // Perform DFS from the first vertex
    dfs(graph, start, visited);

    // Check if all vertices are visited
    for (int i = 0; i < numVertices; ++i) {
        if (!visited[i] && !graph[i].empty())
            return false;
    }

    return true;
}

// Remove an edge from the graph and check if it becomes disconnected
bool removeEdgeAndCheckDisconnected(vector<vector<int>>& graph, int u, int v) {
    // Check if the edge exists
    if (u < 0 || u >= graph.size() || v < 0 || v >= graph.size() || graph[u].empty() || graph[v].empty())
        return false;

    // Remove the edge between u and v
    auto it = find(graph[u].begin(), graph[u].end(), v);
    if (it != graph[u].end())
        graph[u].erase(it);

    it = find(graph[v].begin(), graph[v].end(), u);
    if (it != graph[v].end())
        graph[v].erase(it);

    // Check if the graph becomes disconnected
    return !isConnected(graph);
}

// Print the graph
void printGraph(const std::vector<std::vector<int>>& graph) {
    for (int i = 0; i < graph.size(); ++i) {
        std::cout << i + 1 << " -> ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numVertices;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;

    cin.ignore(); // Ignore the newline character

    // Create an empty graph
    vector<std::vector<int>> graph(numVertices);

    // Take input for each vertex
    for (int i = 0; i < numVertices; ++i) {
        string line;
        cout << "Enter the neighbors of vertex " << i + 1 << ": ";
        getline(cin, line);

        stringstream ss(line);
        int neighbor;
        while (ss >> neighbor) {
            graph[i].push_back(neighbor);
        }
    }

    cout << "\nOriginal graph:\n";
    printGraph(graph);

    int u, v;
    cout << "\nEnter the edge to remove (u v): ";
    cin >> u >> v;

    // Remove an edge between vertices u and v
    bool disconnected = removeEdgeAndCheckDisconnected(graph, u - 1, v - 1);

    cout << "\nGraph after removing edge (" << u << ", " << v << "):\n";
    printGraph(graph);

    if (disconnected) {
        cout << "\nGraph has become disconnected.\n";
    } else {
        cout << "\nGraph remains connected.\n";
    }

    return 0;
}
