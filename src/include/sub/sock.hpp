
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

class sock {
public:
  int link = socket(AF_INET, SOCK_STREAM, 0);

  sockaddr_in server;

  char *Message;

  void setMessage(std::string message);
  int connectToServer();
  int sendToServer();
  int closeServerConnect();
};
