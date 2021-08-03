#include<bits/stdc++.h>
using namespace std;
vector<int> graph[5];
bool visited[5];
vector<int> Result;
void Dfs(int Source){
    visited[Source] =1;
    for (int i = 0; i < graph[Source].size(); i++)
    {
        int next=graph[Source][i];
        if(visited[next]==0){
            Dfs(next);
        }
    }
    Result.push_back(Source);
}
int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    for(int i=1;i<=node;i++){
        if(visited[i]==0){
            Dfs(i);
        }
    }
    reverse(Result.begin(), Result.end());
    for(int i=0;i<Result.size();i++){
        cout<<Result[i]<<" ";
    }
    
   
}