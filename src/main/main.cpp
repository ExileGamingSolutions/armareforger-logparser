#include "main.hpp"
#include <iostream>

int main() {
  _scan.readFile("test.txt");
  unParsedLogs = _scan.logLines;
  _parseSort.filter(unParsedLogs);
  std::string message = _parseSort.init[0];
  return 0;
}
