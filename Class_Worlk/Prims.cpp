#include "bits/stdc++.h"
using namespace std;
int n,m;
int cost=0;
const int N=1e5 + 3;
vector<pair<int,int>> g[N];
vector<int> dist(N),parents(N);
const int INF=1e9;
vector<bool> vis(N);
void prims(int source){
     for(int i=0; i<n; i++){
         dist[i] = INF;;
     }
     set<vector<int>> s;
     dist[source]=0;
     s.insert({0,source});
     while (!s.empty())
     {
         auto x=*(s.begin());
         s.erase(x);
         vis[x[1]] = true;
         int u = x[1];
         int v = parents[x[1]];
         int w = x[0];
         cout<<u<<" "<<v<<" "<<w<<endl;
         cost+=w;
         for(auto it: g[x[1]]){
             if(vis[it[0]])
              continue;
              if(dist[it[0]] > it[1]){
                  s.erase({dist[it[0]],it[0]});
                  dist[it[0]] = it[1];
                  s.insert({dist[it[0]],it[0]});
                  parents[it[0]]= x[1];
              }
         }
     }
     




}
int32_t main(){
    
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    prims(0);
    cout<<cost<<endl;

}