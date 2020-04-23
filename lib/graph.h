#pragma once

#include <node.h>
#include <string>

class Graph {
private:
  std::vector<Node> graph;
  int nNodes;
public:
  Graph(std::vector<Node>);
  Graph(std::string);
  std::vector<Node> getGraph();
  Node operator[](int);
  friend std::ostream& operator<<(std::ostream&, const Graph&);
};