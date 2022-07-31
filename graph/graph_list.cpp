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
    void print(){
        for(int i = 0; i < this->v; i++){
            cout<<i;
            for(int j = 0; j < adjList[i].size(); j++){
                cout<<"->"<<adjList[i][j];
            }
            cout<<endl;
        }
    }
};

int main(){
    //Code Here
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.print();
    return 0;
}