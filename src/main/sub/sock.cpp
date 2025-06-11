

#include "sub/sock.hpp"

void sock::setMessage(std::string message) {
  char *buffer = "vvvcdsbvfdscdsccccccccccccccccccccccccccccccccccc";
  Message = buffer;
}

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

  if (send(link, Message, strlen(Message), 0) != -1) {
    return 1;
  } else {
    return 0;
  }
}
int sock::closeServerConnect() {

  if (close(link) == 0) {
    return 1;
  } else {
    return 0;
  }
}
