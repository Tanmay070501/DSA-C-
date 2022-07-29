#include <iostream>
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
        void print(){
            for(int i = 0; i < v; i++){
                for(int j = 0; j < v; j++){
                    cout<<adjMatrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    Graph g(5,4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(1,4);
    g.print();
    return 0;
}