#include "main.hpp"

int main() {
  _scan.readFile("test.txt");
  unParsedLogs = _scan.logLines;
  _parseSort.filter(unParsedLogs);
  for (int i = 0; i < _parseSort.init.size(); i++) {
    std::cout << _parseSort.init[i] << std::endl;
  }
}
