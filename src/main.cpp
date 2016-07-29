// Headers.
#include <iostream>
#include <memory>
#include "network/network.h"


// Main.
int main() {


  // Layer sizes.
  int layer_sizes[] = { 4, 2, 1 };


  // Instantiate new network with layer sizes.
  Network net(layer_sizes);


  // Check.
  std::cout << "\nFirst (non-input) layer bias vector: \n\n" << net.GetBiasAtIndex(0) << std::endl;
  std::cout << "\nInput-to-first-layer weight matrix: \n\n" << net.GetWeightAtIndex(0) << std::endl;


}
