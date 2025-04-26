#include "main.hpp"

int main(){
 _scan.readFile("test.txt");
unParsedLogs = _scan.logLines;
_parseSort.filter(unParsedLogs);
std::cout << _parseSort.engine[1] << std::endl;
}