#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
class scan{
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

