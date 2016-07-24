// Headers.
#include <iostream>
#include "Network/Network.h"


// Main.
int main() {


  // Get the layer sizes.
  int layerSizes[] = { 4, 2, 1 };


  // Instantiate new network.
  Network net(layerSizes);


  // Check.
  std::cout << "It's working!\n";


}
