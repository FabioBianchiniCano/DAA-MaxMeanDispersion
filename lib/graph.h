#pragma once

#include <node.h>
#include <string>

class Graph {
private:
  std::vector<Node> graph;
public:
  Graph(std::vector<Node>);
  Graph(std::string);
  std::vector<Node> getGraph();
  Node operator[](int);
};