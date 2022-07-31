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
    //BFS Implementation
    void bfs(int start){
        vector<int> queue;
        vector<bool> visited(this->v,false);
        
        queue.push_back(start);
        visited[start] = true;

        int first;
        while(!queue.empty()){
            first = queue[0];
            //print
            cout<<first<<" ";
            queue.erase(queue.begin());//remove the first visited vertice
            //check and insert adjacent nodes
            for(int i = 0; i < adjList[first].size();i++){
                int node = adjList[first][i];
                if(visited[node]==false){
                    queue.push_back(node);
                    visited[node] = true;
                }
            }
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

    g.bfs(0);
    return 0;
}