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


  // Save the largest layer.
  int largest_layer_size = 0;


  // Get the number of layers and determine largest layer in one sweep.
  for (int i = 0; layer_sizes[i] != NULL; i++) {


    // Check it the current layer is the largest.
    if (layer_sizes[i] > largest_layer_size) {
      largest_layer_size = layer_sizes[i];
    }


    // Increment the current number of layers.
    num_layers_++;


  }


  // Allocate memory for the layer sizes (first layer is input).
  sizes_ = new int[num_layers_];


  // Import layer size values.
  for (int i = 0; i < num_layers_; i++) {
    sizes_[i] = layer_sizes[i];
  }


  // Initialize weight and bias matrices to random integers.
  weights_ = arma::imat(largest_layer_size, num_layers_, arma::fill::randn);
  biases_ = arma::imat(largest_layer_size, num_layers_ - 1, arma::fill::randn);


}


// Destructor.
Network::~Network() {
  delete[] sizes_;
}


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
