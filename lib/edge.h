#pragma once

#include <fstream>
#include <iostream>
#include <vector>

class Edge {
 private:
  int exitNode;
  int arrivalNode;
  float cost;

 public:
  Edge(){};
  Edge(int, int, float);
  Edge(float);
  int getExit();
  int getArrival();
  float getCost();
  void setExit(int);
  void setArrival(int);
  void setCost(float);
  Edge operator=(Edge&);
  friend std::ostream& operator<<(std::ostream&, const Edge&);
};
