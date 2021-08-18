#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> tree;
void dfs(int val){
    cout<<val<<" ";
    for(const int& node:tree[val]){
        dfs(val);
    }


}
int main(){
    int n,m,v,u;
    cin>>n>>m;
    
    tree.resize(n+1);
    while (m--)
    {
        cin>>v>>u;
        tree[v].push_back(u);
        //tree[u].push_back(v);
    }
    dfs(1);

    
}