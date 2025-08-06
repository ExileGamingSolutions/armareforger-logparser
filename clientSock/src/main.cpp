#include <arpa/inet.h>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <errno.h>
#include <iostream>
#include <netinet/in.h>
#include <optional>
#include <ostream>
#include <poll.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/poll.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
int main() {
  int sock = socket(AF_INET, SOCK_STREAM, 0);

  struct sockaddr_in sockStr;
  char address[14] = "192.168.50.89";
  sockStr.sin_family = AF_INET;
  sockStr.sin_port = htons(2003);
  sockStr.sin_addr.s_addr = INADDR_ANY;
  bool end = false;
  char *buffer = new char[4024];
  pollfd p;
  nfds_t n;
  do {
    bind(sock, (struct sockaddr *)&sockStr, sizeof(sockStr));
    listen(sock, 30);
    int client = accept(sock, nullptr, nullptr);
    p.fd = client;
    p.events = POLLIN;
    p.revents = POLLIN;

    // bind(client, (struct sockaddr *)&sockStr, sizeof(sockStr));
    listen(client, 30);
    // read(client, buffer, sizeof(buffer));
    recv(p.fd, buffer, sizeof(buffer), 0);
    n = p.revents;
    poll(&p, n, -1);
    //    std::cout << x << std::endl;
    std::cout << p.revents << std::endl;
    for (int i = 0; i < sizeof(buffer); i++) {
      std::cout << buffer[i];
    }
    // std::cout << sock << std::endl;
    // std::cout << x << std::endl;
    std::string endClause = "!!!END!!!";
    if (endClause == buffer) {
      end = true;
      delete[] buffer;
    }
  } while (end == false);
  close(sock);
  return 0;
}
