#include <iostream>

using namespace std;

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    GraphType <int> G;
    for(int i = 1; i<=vertex; i++){
        G.AddVertex();
    }

    while(edge--){
        int u, v, weight;
        cin >> u >> v >> weight;
        G.AddEdge(u, u, weight);
    }

    int src, dst;
    cin >> src >>dst;
    G.DepthFirstSearch(src, dst);

}
