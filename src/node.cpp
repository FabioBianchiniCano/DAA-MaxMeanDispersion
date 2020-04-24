#include <node.h>

Node::Node(std::vector<Edge> edges_) {
  for (int itEdges = 0; itEdges < edges_.size(); itEdges++) {
    edges.push_back(edges_[itEdges].getCost());
  }
}

Node::Node(int size) {
  edges.resize(size);
}

std::vector<Edge> Node::getEdges() {
  return edges;
}

void Node::setEdge(Edge newEdge, int position) {
  edges[position] = newEdge;
}


Edge Node::operator[](int position) {
  return edges[position];
}

std::ostream& operator<<(std::ostream& os, const Node& auxNode) {
  for (int i = 0; i < auxNode.edges.size(); i++) {
    os << auxNode.edges[i] << " ";
  }
  return os;
}