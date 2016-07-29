// Headers.
#include <cstddef>    // NULL
#include <iostream>   // cin, cout, endl
#include <vector>     // vector<T>
#include <cmath>      // exp
#include <armadillo>  // mat, fill::randn


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


  arma::mat GetBiasAtIndex(int);
  arma::mat GetWeightAtIndex(int);


// Private members.
private:
  int num_layers_ = 0;
  std::vector<int> sizes_;
  std::vector<arma::mat> biases_;
  std::vector<arma::mat> weights_;


};
