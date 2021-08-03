#include<bits/stdc++.h>
using namespace std;
vector <int> graph[MAX_PATH];
bool vis[MAX_PATH];
int dist[MAX_PATH];
void bfs(int source){
    queue<int> q;
    vis[source]=1;
    dist[source]=0;
    q.push(source);
    while (!q.empty())
    {
        int n=q.front();
        q.pop();
        for(int i=0;i<graph[n].size();i++){
            int next=graph[n][i];
            if(vis[next]==0){
                vis[next]=1;
                dist[next]=dist[n]+1;
                q.push(next);
            }
        }
    }
    
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++){
        int u,v;
        cin>>u>>v;
        graph->push_back(v);
        graph->push_back(u);
    }
    int s;
    cin>>s;
    bfs(s);
    for(int i=1;i<=nodes;i++){
        cout<<"Distance of "<<i<<" is "<<dist[i]<<endl;
    }



}