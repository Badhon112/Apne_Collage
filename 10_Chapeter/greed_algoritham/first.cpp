#include<bits/stdc++.h>
using namespace std;
vector<int> graph[5];
void Print(vector <int> graph[], int n){
    cout<<"The Graph is"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter 1st node and 2nd Edges"<<endl;
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    Print(graph,nodes);

}