#include <graph.h>

Graph::Graph(std::vector<Node> graph_) {
  for (int itNode = 0; itNode < graph_.size(); itNode++) {
    graph.push_back(graph_[itNode]);
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

  for (int itNode = 0; itNode < nNodes; itNode++) {
    for (int itEdge = itNode + 1; itEdge < nNodes; itEdge++) {
      std::string auxEdge;
      std::getline(file, auxEdge);
      graph[itNode].setEdge(Edge(itNode, itEdge, stof(auxEdge)), itEdge);
      graph[itEdge].setEdge(Edge(itEdge, itNode, stof(auxEdge)), itNode);
    }
  }

  // Para la diagonal principal se pone todo a 0
  for (int itDiag = 0; itDiag < nNodes; itDiag++)
    graph[itDiag].setEdge(Edge(itDiag, itDiag, 0), itDiag);

}

std::vector<Node> Graph::getGraph() { return graph; }

int Graph::getSize() { return nNodes; }

Node Graph::operator[](int position) { return graph[position]; }

std::ostream& operator<<(std::ostream& os, const Graph& auxGraph) {
  for (int i = 0; i < auxGraph.graph.size(); i++) {
    os << auxGraph.graph[i] << std::endl;
  }
  return os;
}
