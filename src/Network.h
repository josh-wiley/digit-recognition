// Headers.
#include <cstddef>    // NULL
#include <cstdlib>    // srand, rand
#include <ctime>      // time
#include <iostream>   // cin, cout, endl (testing only)


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
  int** biases = NULL;
  int** weights = NULL;


};
