#include<iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<int>>& graph, int vertex ,vector<bool>&visited )
{
    visited[vertex]=true;

    cout<<vertex<<" ";
    for(int i=0;i<graph[vertex].size();i++)
    {
        int adj=graph[vertex][i];
        if(!visited[adj])
        {
            DFS(graph,adj,visited);
        }
    }

}

void traverseDFS(vector<vector <int>>& graph,int startVertex )
{
    int nv=graph.size();
    vector<bool> visited(nv,false);

    DFS(graph, startVertex, visited);


}

int main()
{
    int n;
    cin>>n;
    vector<vector <int>> graph(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>graph[i][j];
        }
    }
    int startVertex;
    cin >> startVertex;

    traverseDFS(graph, startVertex);

    return 0;
}