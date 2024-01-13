// Rasul Amani
// 811901038
#include <iostream>
#include <list>
using namespace std;


class Graph {

  int numVertices;
  list<int>* adjLists;
  bool* visited;
public:
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int start);
};


Graph::Graph(int V) {

  numVertices = V;
  adjLists = new list<int>[V];
  visited = new bool[V];
  for (int i = 0; i < V; i++) {
    visited[i] = false;
  }
}


void Graph::addEdge(int src, int dest) {

  adjLists[src].push_back(dest);
}


void Graph::DFS(int start) {

  visited[start] = true;
  cout << start << " ";
  for (auto i = adjLists[start].begin(); i != adjLists[start].end(); i++) {
    if (!visited[*i]) {
      DFS(*i);
    }
  }
}


int main() {

    


    return 0;
}
