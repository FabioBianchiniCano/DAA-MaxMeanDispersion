#include <graph.h>

Graph::Graph(std::vector<Node> newGraph) {
  for (int itNode = 0; itNode < newGraph.size(); itNode++) {
    graph.push_back(newGraph[itNode]);
  }
}

Graph::Graph(std::string fileName) {
  std::ifstream file(fileName);
  
}


std::vector<Node> Graph::getGraph() {
  return graph;
}

Node Graph::operator[](int position) {
  return graph[position];
}

