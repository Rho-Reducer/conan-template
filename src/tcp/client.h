
#ifndef TCP_CLIENT_H
#define TCP_CLIENT_H

#include <string>

namespace rho::reducer::tcp {
class Client {
 public:
  Client() {}
  virtual ~Client() {}

  private:
    std::string remote_host_;
};
}  // namespace rho::reducer::tcp

#endif