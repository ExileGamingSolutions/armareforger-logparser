#include "main.hpp"
#include <iostream>

int main() {
  _scan.readFile("test.txt");
  unParsedLogs = _scan.logLines;
  _parseSort.filter(unParsedLogs);

  _sock.setMessage("ccccccccccccccccccccccc");
  std::cout << _sock.Message << std::endl;
  switch (int i = 0) {
  case 0:
    if (_sock.connectToServer()) {
      std::cout << "CONNECTED\n";
      i++;
    } else {
      i = 0;
    }

  case 1:
    if (_sock.sendToServer()) {
      std::cout << "SENT \n";
      i++;
    }
  case 2:
    _sock.closeServerConnect();
  }
  int x = _sock.connectToServer();
  int m = _sock.sendToServer();

  _sock.closeServerConnect();
}
