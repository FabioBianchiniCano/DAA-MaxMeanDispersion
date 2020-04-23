#pragma once

#include <iostream>
#include <vector>
#include <fstream>

class Node {
private:
  std::vector<float> edges;
public:
  Node(std::vector<float>);
  ~Node(){}
  std::vector<float> getEdges();
  float operator[](int);
};

