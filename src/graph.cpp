#include <graph.h>

Graph::Graph(std::vector<Node> newGraph) {
  for (int itNode = 0; itNode < newGraph.size(); itNode++) {
    graph.push_back(newGraph[itNode]);
  }
}

Graph::Graph(std::string fileName) {
  std::ifstream file(fileName);
  std::string auxNumNodes; 
  std::getline(file, auxNumNodes);
  nNodes = stoi(auxNumNodes);

  for (int i = 0; i < nNodes; i++) {
    graph.push_back(Node(nNodes));
  }
  
  for (int i = 0; i < nNodes; i++) {
    for (int j = i + 1; j < nNodes; j++) {
      if (j != i) {
        std::string auxEdge;
        std::getline(file, auxEdge);
        std::cout << auxEdge << std::endl;
        graph[i].setEdge(stof(auxEdge), j);
        graph[j].setEdge(stof(auxEdge), i);
      }
    }
  }

}

std::vector<Node> Graph::getGraph() {
  return graph;
}

Node Graph::operator[](int position) {
  return graph[position];
}

std::ostream& operator<<(std::ostream& os, const Graph& auxGraph) {
  for (int i = 0; i < auxGraph.graph.size(); i++) {
    os << auxGraph.graph[i] << std::endl;
  }
  return os;
}

