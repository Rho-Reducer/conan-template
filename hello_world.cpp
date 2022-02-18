
#include <hello_world.h>
#include <iostream>

int main(int argc, char* argv[]) {

  std::cout << argv[0] << " Version " << hello_world_VERSION_MAJOR << "."
    << hello_world_VERSION_MINOR << "." << hello_world_VERSION_PATCH << "\n";
  std::cout << "Usage: " << argv[0] << "\n";
  
  return 0;
}