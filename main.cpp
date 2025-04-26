#include "main.hpp"

int main(){
 _scan.readFile("test.txt");
unParsedLogs = _scan.logLines;
_parseSort.filter(unParsedLogs);
std::cout << _parseSort.network[0] << std::endl;
}