#include <arpa/inet.h>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <errno.h>
#include <iostream>
#include <netinet/in.h>
#include <optional>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
  char buffer[4024] = {0};

  do {
    bind(sock, (struct sockaddr *)&sockStr, sizeof(sockStr));
    listen(sock, 30);
    int client = accept(sock, nullptr, nullptr);
    listen(client, 30);
    // read(client, buffer, sizeof(buffer));
    recv(client, buffer, sizeof(buffer), 0);
    //    std::cout << x << std::endl;

    std::cout << buffer << std::endl;

    // std::cout << sock << std::endl;
    // std::cout << x << std::endl;
    std::string endClause = "!!!END!!!";
    if (endClause == buffer) {
      end = true;
    }
  } while (end == false);
  close(sock);
  return 0;
}
