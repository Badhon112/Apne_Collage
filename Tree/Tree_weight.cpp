#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, v, u, w;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph;
    graph.resize(n + 1);
    while (m--)
    {
        cin>>v>>u>>w;
        graph[v].push_back(make_pair(u,w));
        graph[u].push_back(make_pair(v,w));
        
    }
}