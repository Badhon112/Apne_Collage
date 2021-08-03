#include <bits/stdc++.h>
using namespace std;
#define n 105
struct Dijkstar
{
    int value;
    int weight;
};
vector<Dijkstar> node[n];
bool visited[n];
int path[n];
class Comper
{
public:
    bool operator()(Dijkstar &A, Dijkstar &B)
    {
        if (A.weight > B.weight)
            return true;
        return false;
    }
};

void Algoritham(int Source)
{
    priority_queue<Dijkstar, vector<Dijkstar>, Comper> pq;
    pq.push({Source, 1});
    while (!pq.empty())
    {
        Dijkstar current = pq.top();
        pq.pop();
        int value = current.value;
        int weight = current.weight;
        if (visited[value] == 1)
            continue;
        path[value] == weight;
        visited[value] = 1;

        for (int i = 0; i < node[value].size(); i++)
        {
            int next = node[value][i].value;
            int nxtCost = node[value][i].weight;
            if (visited[next] == 0)
            {
                pq.push({next, weight + nxtCost});
            }
        }
    }
}
int main()
{
    int Nodes, Edges;
    cin >> Nodes >> Edges;
    for (int i = 1; i <= Edges; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        node[a].push_back({b, w});
    }
    int source;
    cin >> source;
    Algoritham(source);
    for (int i = 1; i <= Nodes; i++)
    {
        cout << "Node: " << i << " distance " << path[i] << endl;
    }
}