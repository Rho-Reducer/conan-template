
#include <string_util.h>
#include <regex>


namespace rho::reducer::util {

  std::vector<std::string> split(const std::string& in_string, const std::string& regex) {
    std::vector<std::string> results;
    std::string tmp_str(in_string);
    std::regex r_in(regex);

    std::regex_iterator<std::string::iterator> rit(tmp_str.begin(), tmp_str.end(), r_in);
    std::regex_iterator<std::string::iterator> rend;

    std::string placeholder;
    while (rit != rend) {
      results.push_back(rit->prefix().str());
      placeholder = rit->suffix().str();
      rit++;
      if (rit == rend) {
        results.push_back(placeholder);
      }
    }

    if (results.size() == 0) {
      results.push_back(in_string);
    }

    return results;
  }

}