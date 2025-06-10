#include "main.hpp"

int main() {
  _scan.readFile("test.txt");
  unParsedLogs = _scan.logLines;
  _parseSort.filter(unParsedLogs);

  _sock.setMessage(_parseSort.network[0]);
  _sock.connectToServer();
  _sock.sendToServer();
  _sock.closeServerConnect();
}
