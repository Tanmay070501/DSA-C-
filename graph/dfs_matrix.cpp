#include <iostream>
#include <vector>
using namespace std;

class Graph{
    int v,e;
    //pointer to 2D Matrix/Array
    int ** adjMatrix;
    public:
        Graph(int v,int e){
            this->v = v;
            this->e = e;
            this->adjMatrix = new int* [v];
            for(int i = 0; i < v; i++){
                this->adjMatrix[i] = new int [v];
                for(int j = 0; j < v; j++){
                    adjMatrix[i][j] = 0;
                }
            }
        }
        void addEdge(int start, int end){
            //for undirected graph
            this->adjMatrix[start][end] = 1;
            this->adjMatrix[end][start] = 1;
        }
        
        //DFS IMPLEMENTATION
        void dfs(int start, vector<bool>& visited){
            cout<<start<<" ";
            visited[start] = true;
            for(int i = 0; i < v; i++){
                //check if other edge connected to start is already visited or not
                //if not visited, then perform dfs on that edge. 
                if(this->adjMatrix[start][i] == 1 && visited[i] == false){
                    dfs(i,visited);
                }
            }
        }
};
int main(){
    Graph g(5,4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(1,4);
    //dfs call
    vector<bool> visited(5,false);
    g.dfs(0,visited);
    return 0;
}