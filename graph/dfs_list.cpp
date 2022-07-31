#include <iostream>
#include <vector>
using namespace std;

class Graph{
    int v;//no. of nodes/vertices
    vector<int> *adjList;
    public:
        Graph(int v){
            this->v = v;
            this->adjList = new vector<int> [this->v];
        }
    void addEdge(int start, int end){
        this->adjList[start].push_back(end);
        this->adjList[end].push_back(start);
    }
    //DFS Implementation
    void dfs(int start, vector<bool>& visited){
        cout<<start<<" ";
        visited[start] = true;

        for(int i = 0; i < adjList[start].size(); i++){
            int node = adjList[start][i];
            if(visited[node]==false){
                dfs(node,visited);
            }
        }
    }
};

int main(){
    //Code Here
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    vector<bool> visited(4,false);
    g.dfs(2,visited);
    return 0;
}