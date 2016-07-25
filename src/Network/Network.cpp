// Headers.
#include "Network.h"


/*
Function Declarations
*/


// Neuron activation function (sigmoid).
float activation(float);


// Derivative of neuron activation function (sigmoid).
float activationPrime(float);



/*
Member Function Implementations
*/


// Parameterized Constructor.
Network::Network(int* layerSizes) {


  // Save the largest layer.
  int largestLayerSize = 0;


  // Get the number of layers and determine largest layer in one sweep.
  for (int i = 0; layerSizes[i] != NULL; i++) {


    // Check it the current layer is the largest.
    if (layerSizes[i] > largestLayerSize) {
      largestLayerSize = layerSizes[i];
    }


    // Increment the current number of layers.
    numLayers++;


  }


  // Allocate memory for the layer sizes (first layer is input).
  sizes = new int[numLayers];


  // Import layer size values.
  for (int i = 0; i < numLayers; i++) {
    sizes[i] = layerSizes[i];
  }


  // Initialize weight and bias matrices to random integers.
  weights = arma::imat(largestLayerSize, numLayers, arma::fill::randn);
  biases = arma::imat(largestLayerSize, numLayers - 1, arma::fill::randn);


}


// Destructor.
Network::~Network() {
  delete[] sizes;
}


// Feed forward.
void Network::feedForward() {}


// Learn via Stochastic Gradient Descent (SGD).
void Network::learn() {}


// Get a new input batch for the learning algorithm.
void Network::updateBatch() {}


// Backward propagation.
void Network::backwardProp() {}


// Evaluate.
void Network::evaluate() {}


// Derivative of the cost function
float Network::costDerivative() {}



/*
Non-member Function Implementations
*/


// Sigmoid (activation) function.
float activation(float);


// Derivative of sigmoid (activation) function
float activationPrime(float);
