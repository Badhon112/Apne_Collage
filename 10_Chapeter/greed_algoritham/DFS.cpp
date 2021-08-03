#include<bits/stdc++.h>
using namespace std;
vector<int> graph[5];
bool visited[5];
void Dfs(int Source){
    visited[Source] =1;
    for (int i = 0; i < graph[Source].size(); i++)
    {
        int next=graph[Source][i];
        if(visited[next]==0){
            Dfs(next);
        }
    }
}
int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(u);
        graph[v].push_back(v);
    }
    Dfs(0);
    for(int i=0;i<node;i++){
        if(visited[i]==1){
            cout<<"Node "<<i<<" Is Visited"<<endl;
        }
        else{
            cout<<"Node " <<i<<" Is not Visited"<<endl;
        }
    }
}