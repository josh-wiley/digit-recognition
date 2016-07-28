// Headers.
#include <iostream>
#include <memory>
#include "network/network.h"


// Main.
int main() {


  // Layer sizes.
  std::unique_ptr<int> layer_sizes(new int[ 4, 2, 1 ]);


  // Instantiate new network with layer sizes.
  Network net( layer_sizes.get() );


  // Check.
  std::cout << "It's working!\n";


}
