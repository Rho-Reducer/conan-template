
#ifndef RHO_STRING_UTIL_H
#define RHO_STRING_UTIL_H

#include <vector>
#include <string>

namespace rho::reducer::util {
  
  /// <summary>
  /// Splits a string into parts based on the provided regex string.
  /// </summary>
  /// <param name="regex"></param>
  /// <returns></returns>
  std::vector<std::string> split(const std::string& in_string, const std::string& regex);
}

#endif