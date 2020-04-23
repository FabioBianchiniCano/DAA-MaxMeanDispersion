#include <strategy.h>

class Context {
private:
  Strategy *_strategy;
public:
  Context() {
    _strategy = NULL;
  }
  Context(Strategy *strategy) {
    _strategy = strategy;
  }
  void setstrategy(Strategy *strategy ) {
    delete _strategy;
    _strategy = strategy;
  }

  void algorithm(Graph graph) {
    _strategy->algorithm(graph);
  }

};