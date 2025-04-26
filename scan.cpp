#include "scan.hpp"


void scan::readFile(){
  try {
    read.open("test.txt");

    if (read.fail())
      throw(1);

    std::cout << "OPENED!\n";

  } catch (...) {
    std::cout << "CANNOT OPEN FILE\n";
  };

  std::getline(read, a,'\n');
  int v = 0;
  for (int i = 0; i < a.length(); i++) {
    // figure this out later lol.....  v==1 ??
    if (a[i] != '\n' && v == 1 ) {
      x.push_back(a[i]);

    } else {
      logLines.push_back(x);
      x.erase();
    }
  }
  read.close();
}
std::vector<std::string> scan::getLog(){
  return logLines;
}