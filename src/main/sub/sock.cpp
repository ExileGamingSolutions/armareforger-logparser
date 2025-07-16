

#include "sub/sock.hpp"
#include <chrono>
#include <iostream>
#include <string>
#include <sys/socket.h>
#include <thread>

void sock::setMessage(std::string message) { Message = message; }

int sock::connectToServer() {

  server.sin_family = AF_INET;
  server.sin_port = htons(2003);
  server.sin_addr.s_addr = INADDR_ANY;
  if (connect(link, (struct sockaddr *)&server, sizeof(server)) == 0) {

    return 1;
  } else {
    return 0;
  }
}
int sock::sendToServer() {

  if (send(link, Message.c_str(), Message.size(), 0) != -1) {
    return 1;
  } else {
    return 0;
  }
}
int sock::sendClumpToServer(std::vector<std::string> messageClump) {

  for (int i = 0; i < messageClump.size(); i++) {
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::string msg = messageClump[i];
    int m = send(link, msg.c_str(), msg.size(), MSG_MORE);
    std::cout << m << "  " << "sent: " << i << std::endl;
  }
  return 1;
}

int sock::closeServerConnect() {

  if (close(link) == 0) {
    return 1;
  } else {
    return 0;
  }
}
