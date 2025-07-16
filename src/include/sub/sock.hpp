
#include <arpa/inet.h>
#include <chrono>
#include <iostream>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <thread>
#include <unistd.h>
#include <vector>

class sock {
public:
  int link = socket(AF_INET, SOCK_STREAM, 0);
  struct mmsghdr msgg;

  sockaddr_in server;
  std::string Message;

  void setMessage(std::string message);
  int connectToServer();
  int sendToServer();
  int sendClumpToServer(std::vector<std::string> messageClump);
  int closeServerConnect();
};
