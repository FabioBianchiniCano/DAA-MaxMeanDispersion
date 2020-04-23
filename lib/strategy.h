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
    std::vector<float> maximalPath;
    float maxEdge = 0;
    float mean = 0;
    int foundNewEdge = false;  // foundNewValuableEdge
    int itNodes = 0;

    

    std::cout << "Media: " << std::endl;
    std::cout << mean << std::endl;
    for (int i = 0; i < maximalPath.size(); i++) {
      std::cout << maximalPath[i] << " ";
    }
    std::cout << std::endl;
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