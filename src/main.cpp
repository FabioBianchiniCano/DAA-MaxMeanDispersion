#include <graph.h>
#include <context.h>

int main () {
  std::cout << "Práctica 8 Diseño y Análisis de Algoritmos" << std::endl;
  Graph graph("../data/max-mean-div-10.txt");
  Context *contextGreedy;
  Context *contextGrasp;
  Context *contextMultiBoot;
  Context *contextSVE;

  contextGreedy = new Context(new Greedy);
  contextGrasp = new Context(new Grasp);
  contextMultiBoot = new Context(new MultiBoot);
  contextSVE = new Context(new SVE);
  contextGreedy->algorithm();
  contextGrasp->algorithm();
  contextMultiBoot->algorithm();
  contextSVE->algorithm();
}
