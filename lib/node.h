#pragma once

#include <edge.h>

class Node {
 private:
  std::vector<Edge> edges;

 public:
  Node(std::vector<Edge>);
  Node(int);
  ~Node() {}
  std::vector<Edge> getEdges();
  void setEdge(Edge, int);
  Edge operator[](int);
  friend std::ostream& operator<<(std::ostream&, const Node&);
};
