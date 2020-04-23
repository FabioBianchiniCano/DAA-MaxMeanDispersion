#include <node.h>

Node::Node(std::vector<float> newEdges) {
  for (int itEdges = 0; itEdges < newEdges.size(); itEdges++) {
    edges.push_back(newEdges[itEdges]);
  }
}

std::vector<float> Node::getEdges() {
  return edges;
}

float Node::operator[](int position) {
  return edges[position];
}
