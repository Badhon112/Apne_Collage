#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,u,v;
    vector<vector<int>> tree;
    cin>>n>>m;
    tree.resize(n+1);
    while (m--)
    {
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
}