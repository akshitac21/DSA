#include <iostream>
#include <stdio.h>
#include<stack>
using namespace std;

void print(int** edges, int v, int start, bool* visited)
{   stack<int> Dstack;
    
    visited[start]=true;
    Dstack.push(start);

    for(int i=0; i<v; i++)
    {   if(i == start)
    {
        continue;
    }
        if (edges[start][i]==1)
        {
            if(visited[i])
            {
                continue;
            }

            print(edges, v, i, visited);
        }

    }

    while(!Dstack.empty())
    {
        cout<<Dstack.top()<<endl;
        Dstack.pop();
    }

}

int main()
{
    int v, e, st;
    int** edges = new int*[v];

    cout<<"Enter No of vertices: "<<endl;
    cin>>v;
    cout<<"Enter number of edges: "<<endl;
    cin>>e;

    for (int i=0; i<v; i++)
    {
        edges[i]=new int[v];
        for(int j=0; j<v; j++)
        {
            edges[i][j]=0;
        }
    }

    cout<<"Give input of edges (start-->end): "<<endl;

    for(int i=0; i<e; i++)
    {
        int f, s;
        cin>>f>>s;
        edges[f][s] =1;
        edges[s][f]=1;
    }

    cout<<"The Adjacency matrix: "<<endl;

    for(int i=0; i<v; i++)
    {
        for (int j=0; j<v; j++)
        {
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }

    bool* visited = new bool[v];
    for (int i=0; i<v; i++)
    {
        visited[i]=false;
    }

    cout<<"Enter a start vertex: "<<endl;
    cin>>st;

    print(edges, v, st, visited);

}
