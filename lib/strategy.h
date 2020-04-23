#include <iostream>

class Strategy {
public:
  virtual void algorithm() = 0;
};

class Greedy : public Strategy {
  void algorithm() {
    std::cout << "greedy" << std::endl;
  }
};

class Grasp : public Strategy {
  void algorithm() {
    std::cout << "grasp" << std::endl;
  }
};

class MultiBoot : public Strategy {
  void algorithm() {
    std::cout << "multi-boot" << std::endl;
  }
};

// Search by Variable Environment
class SVE : public Strategy {
  void algorithm() {
    std::cout << "sve" << std::endl;
  }
};