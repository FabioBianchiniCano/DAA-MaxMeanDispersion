#include <graph.h>

#include <iostream>
#include <limits>

class Strategy {
 public:
  virtual void algorithm(Graph graph) = 0;
};

class Greedy : public Strategy {
  void algorithm(Graph graph) {
    std::cout << "Greedy: " << std::endl;
    std::vector <Node> auxSubset; 
    std::vector <Node> finalSubset;   
  }
};

class Grasp : public Strategy {
  void algorithm(Graph graph) { std::cout << "grasp" << std::endl; }
};

class MultiBoot : public Strategy {
  void algorithm(Graph graph) { std::cout << "multi-boot" << std::endl; }
};

// Search by Variable Environment
class SVE : public Strategy {
  void algorithm(Graph graph) { std::cout << "sve" << std::endl; }
};