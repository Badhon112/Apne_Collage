#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e5 + 3;
vector<pair<int, int>> g[N];
int main()
{
    // int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    int parents[N];
    int key[N];
    bool mstSet[N];
    for (int i = 0; i < n; i++)
    {
        key[i] = INT_MAX, mstSet[i] = false, parents[i] = -1;
    }
    key[0] = 0;
    parents[0] = -1;
    for (int count = 0; count < n - 1; count++)
    {
        int mini = INT_MAX, u;
        for (int i = 0; i < n; i++)
        {
            if (mstSet[i] == false && key[i] < mini)
            {
                mini = key[i], u = i;
            }
        }
        mstSet[u] = true;
        for (auto it : g[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mstSet[v] == false && weight < key[v])
            {
                parents[v] = u, key[v] = weight;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        cout << parents[i] << " " << i << endl;
    }
}