// Headers.
#include <iostream>
#include "network/network.h"


// Main.
int main() {


  // Get the layer sizes.
  int layer_sizes[] = { 4, 2, 1 };


  // Instantiate new network.
  Network net(layer_sizes);


  // Check.
  std::cout << "It's working!\n";


}
