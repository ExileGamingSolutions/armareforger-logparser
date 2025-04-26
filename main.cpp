#include "main.hpp"

int main(){
_scan.readFile();
unParsedLogs = _scan.getLog();
_parseSort.filter(unParsedLogs);
std::cout << _parseSort.engine[0] << std::endl;
}