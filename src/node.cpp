#include <node.h>

Node::Node(std::vector<float> newEdges) {
  for (int itEdges = 0; itEdges < newEdges.size(); itEdges++) {
    edges.push_back(newEdges[itEdges]);
  }
}

Node::Node(int size) {
  edges.resize(size);
}

std::vector<float> Node::getEdges() {
  return edges;
}

void Node::setEdge(float newEdge, int position) {
  edges[position] = newEdge;
}


float Node::operator[](int position) {
  return edges[position];
}

std::ostream& operator<<(std::ostream& os, const Node& auxNode) {
  for (int i = 0; i < auxNode.edges.size(); i++) {
    os << auxNode.edges[i] << " ";

  }
  return os;
}