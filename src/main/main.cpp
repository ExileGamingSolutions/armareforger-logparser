#include "main.hpp"
#include <iostream>

int main() {
  _scan.readFile("test.txt");
  unParsedLogs = _scan.logLines;
  _parseSort.filter(unParsedLogs);
  std::string message = _parseSort.init[0];

  _sock.setMessage("!!!END!!!");

  std::cout << "SIZE IS: " << sizeof(message) << std::endl;
  std::cout << "SIZE 2 IS: " << sizeof(_parseSort.init[0]) << std::endl;

  /*
    switch (int i = 0) {
    case 0:
      if (_sock.connectToServer()) {
        std::cout << "CONNECTED\n";
        i++;
      } else {
        i = 0;
        std::cout << "FAILED TO CONNECT, RETRYING\n";
      }

    case 1:
      if (_sock.sendClumpToServer(_parseSort.world)) {
        std::cout << "SENT \n";
        i++;
      }
    case 2:
      _sock.closeServerConnect();
    }*/
  //  int x = _sock.connectToServer();
  //  int m = _sock.sendToServer();

  // _sock.closeServerConnect();
}
