// Rasul Amani
// 811901038
#include <iostream>
#include <list>
#include <queue>
using namespace std;


class Graph {

  int numVertices;
  list<int>* adjLists;
  bool* visited;
public:

  Graph(int V);
  void addEdge(int src, int dest);
  void BFS(int start);
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


void Graph::BFS(int start) {

  queue<int> q;
  visited[start] = true;
  q.push(start);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    cout << v << " ";
    for (auto i = adjLists[v].begin(); i != adjLists[v].end(); i++) {
      if (!visited[*i]) {
        visited[*i] = true;
        q.push(*i);
      }
    }
  }
}


int main() {

    


    return 0;
}

