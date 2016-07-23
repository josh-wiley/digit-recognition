// Headers.
#include "Network.h"


/*
Function Declarations
*/


float activation(float);
float activationPrime(float);



/*
Member Function Implementations
*/


// Parameterized Constructor.
Network::Network(int* layerSizes) {


  // Get the number of layers incrementally.
  for (int i = 0; layerSizes[i] != NULL; i++) {
    numLayers++;
  }


  // Allocate memory for the layer sizes.
  sizes = new int[numLayers];


  // Import size values.
  for (int i = 0; i < numLayers; i++) {
    sizes[i] = layerSizes[i];
  }


  // Seed the random number generator.
  srand(time(NULL));


  // Initialize weights and biases to random integers.



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
