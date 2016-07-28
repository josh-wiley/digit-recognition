// Headers.
#include <cstddef>    // NULL
#include <iostream>   // cin, cout, endl
#include <vector>     // vector<T>
#include <armadillo>  // imat, fill::randn


// Neural Network class definition.
class Network {


// Public members.
public:
  Network(int*);
  ~Network();
  void FeedForward();
  void Learn();
  void UpdateBatch();
  void BackwardProp();
  void Evaluate();
  float CostDerivative();


// Private members.
private:
  int num_layers_ = 0;
  std::vector<int> sizes_;
  std::vector<arma::imat> biases_;
  std::vector<arma::imat> weights_;


};
