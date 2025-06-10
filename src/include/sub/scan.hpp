#include <cstdio>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
class scan {
public:
  void readFile(std::string file);
  std::vector<std::string> getLog();
  std::string filePath = "test.txt";
  std::ifstream read;
  std::fstream write;
  std::string x;
  std::string a;
  std::vector<std::string> logLines;
};
