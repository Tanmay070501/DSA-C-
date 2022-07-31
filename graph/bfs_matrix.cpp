#include <iostream>
#include<vector>
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
        //BFS implementation
        void bfs(int start){
            vector<int> visited(this->v,false);
            vector<int> queue;
            //pushing start node into queue and marking it visited
            queue.push_back(start);
            visited[start] = true;

            int first;
            while (!queue.empty()){
                first = queue[0];

                //print the visited node
                cout<<first<<" ";
                //remove the visited node(first one) from queue
                queue.erase(queue.begin());

                for (int i = 0; i < v; i++){
                    if(this->adjMatrix[first][i] == 1 && visited[i] == false ){
                        //pushing adjacent node of first node in queue
                        queue.push_back(i);
                        //mark all node pushed into queue as visited
                        visited[i] = true;
                    }
                }
                
            }
            
        }
};
int main(){
    Graph g(4,6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.bfs(0);
    return 0;
}