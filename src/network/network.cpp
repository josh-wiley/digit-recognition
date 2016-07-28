// Headers.
#include "network.h"


/*
Function Declarations
*/


// Neuron activation function (sigmoid).
float Activation(float);


// Derivative of neuron activation function (sigmoid).
float ActivationPrime(float);



/*
Member Function Implementations
*/


// Parameterized Constructor.
Network::Network(int* layer_sizes) {


  // Import parameter into sizes member.
  for (int i = 0; layer_sizes[i] != NULL; i++) {
    sizes_.push_back( layer_sizes[i] );
  }


  // Get the number of network layers.
  num_layers_ = sizes_.size();


  // Bias matrices have as many rows as neurons in that layer, and one column (exclude input (1st) layer).
  // Weight matrices have the same number of rows as the size of the next layer, and the same number of
  // columns as the size of the current layer.
  // All matrices are populated with random numbers initially.
  for (int i = 1; i < num_layers_; i++) {
    biases_.push_back( arma::imat(sizes_[i], 1, arma::fill::randn) );
    weights_.push_back( arma::imat(sizes_[i], sizes_[i-1], arma::fill::randn) );
  }


}


// Destructor.
Network::~Network() {}


// Feed forward.
void Network::FeedForward() {}


// Learn via Stochastic Gradient Descent (SGD).
void Network::Learn() {}


// Get a new input batch for the learning algorithm.
void Network::UpdateBatch() {}


// Backward propagation.
void Network::BackwardProp() {}


// Evaluate.
void Network::Evaluate() {}


// Derivative of the cost function
float Network::CostDerivative() {}



/*
Non-member Function Implementations
*/


// Sigmoid (activation) function.
float Activation(float);


// Derivative of sigmoid (activation) function
float ActivationPrime(float);
