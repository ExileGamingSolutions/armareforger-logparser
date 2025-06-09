#include "sub/scan.hpp"
void scan::readFile(std::string file) {
  std::stringstream ss(x);
  try {
    read.open(file);
    write.open(file);

    if (read.fail() || write.fail())
      throw(1);

    std::cout << "OPENED!\n";

  } catch (...) {
    std::cout << "CANNOT OPEN FILE\n";
  };
  // null endline
  std::getline(read, a, '\000');

  for (int i = 0; i < a.length(); i++) {
    if (a[i] != '\n') {

      x.push_back(a[i]);

    } else {
      logLines.push_back(x);
      x.erase();
    }
  }
  // delete file when scan is done then remake file to clear out content
  //  def a better way to do this but i wanna see how well this works..
  std::remove(file.c_str());
  read.close();
}
std::vector<std::string> scan::getLog() { return logLines; }
