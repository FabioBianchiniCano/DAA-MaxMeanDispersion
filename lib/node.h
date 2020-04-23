#pragma once

#include <fstream>
#include <iostream>
#include <vector>

class Node {
 private:
  std::vector<float> edges;

 public:
  Node(std::vector<float>);
  Node(int);
  ~Node() {}
  std::vector<float> getEdges();
  void setEdge(float, int);
  float operator[](int);
  friend std::ostream& operator<<(std::ostream&, const Node&);
};
