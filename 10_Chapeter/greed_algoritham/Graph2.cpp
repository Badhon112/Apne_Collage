#include<bits/stdc++.h>
using namespace std;
vector<int> graph[5];
void printgraph(vector<int> graph[],int nodes){
    cout<<"The graph are:"<<endl;
    for(int i=0;i<nodes;i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter nodes and edges"<<endl;
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    printgraph(graph, nodes);

}