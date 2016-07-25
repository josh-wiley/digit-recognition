// Headers.
#include <cstddef>    // NULL
#include <iostream>   // cin, cout, endl
#include <armadillo>  // imat, fill::randn


// Neural Network class definition.
class Network {


// Public members.
public:
  Network(int*);
  ~Network();
  void feedForward();
  void learn();
  void updateBatch();
  void backwardProp();
  void evaluate();
  float costDerivative();


// Private members.
private:
  int numLayers = 0;
  int* sizes = NULL;
  arma::imat biases;
  arma::imat weights;


};
