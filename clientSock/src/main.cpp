#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/io.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

int main() {
  int client = socket(AF_INET, SOCK_STREAM, 0);

  sockaddr_in serve;

  serve.sin_family = AF_INET;
  serve.sin_port = htons(2003);
  serve.sin_addr.s_addr = INADDR_ANY;

  connect(client, (struct sockaddr *)&serve, sizeof(serve));
  const char *m = "PASS";

  send(client, m, strlen(m), 0);

  close(client);
  return 0;
}
