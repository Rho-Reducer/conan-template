
#include <hello_world.h>
#include <iostream>
#include <string_util.h>

void print_usage(char argv[]) {
  std::cout << "Usage: " << argv << "[<string_to_split> <regex>]" << "\n";
}

int main(int argc, char* argv[]) {

  if (argc != 1 && argc != 3) {
    std::cout << "Invalid number of arguments: " << argc << "\n";
    for (int i = 0; i < argc; i++) {
      std::cout << "Argument #" << i << ": " << argv[i] << "\n";
    }
    print_usage(argv[0]);
    return -1;
  }

  std::cout << argv[0] << " Version " << hello_world_VERSION_MAJOR << "."
    << hello_world_VERSION_MINOR << "." << hello_world_VERSION_PATCH << "\n";
// 
//   if (argc == 3) {
//     std::cout << "Inputs detected...\n"
//       << "String to Split: " << argv[1] << "\n"
//       << "Regex for search: " << argv[2] << "\n";
//     std::string in_str(argv[1]);
//     std::string regex(argv[2]);
//   }
//
  std::string split_str("this subject has a submarine as a subsequence");
  std::string regex("\\b(sub)([^ ]*)");
  //std::string regex("\\s");
  std::cout << "Splitting string: " << split_str << "\n";
  std::cout << "using regex: " << regex << "\n";
  
  auto results = rho::reducer::util::split(split_str, regex);

  std::cout << "Results:\n";
  for (auto& str : results) {
    std::cout << str << "\n";
  }

  return 0;
}