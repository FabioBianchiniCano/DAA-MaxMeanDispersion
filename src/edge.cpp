#include <edge.h>

Edge::Edge(int exitNode_, int arrivalNode_, float cost_) {
  exitNode = exitNode_;
  arrivalNode = arrivalNode_;
  cost = cost_;
}

Edge::Edge(float cost_) {
  setCost(cost_);
}

int Edge::getExit() { return exitNode; }

int Edge::getArrival() { return arrivalNode; }

float Edge::getCost() { return cost; }

void Edge::setExit(int exitNode_) { exitNode = exitNode_; }

void Edge::setArrival(int arrivalNode_) { arrivalNode = arrivalNode_; }

void Edge::setCost(float cost_) { cost = cost_; }

Edge Edge::operator=(Edge& newEdge) {
  exitNode = newEdge.getExit();
  arrivalNode = newEdge.getArrival();
  cost = newEdge.getCost();
}

std::ostream& operator<<(std::ostream& os, const Edge& auxEdge) {
  // os << "Exit: " << auxEdge.exitNode;
  // os << " Arrival: " << auxEdge.arrivalNode;
  // os << " " << auxEdge.cost << std::endl; 
  os << auxEdge.cost;
  return os;
}
