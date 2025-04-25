#include "scan.hpp"

int main() {

  try {
    read.open("test.txt");

    if (read.fail())
      throw(1);

    std::cout << "OPENED!\n";

  } catch (...) {
    std::cout << "CANNOT OPEN FILE\n";
    return 101;
  };

  std::getline(read, a, '\13');
  // read >> x;
  int v = 0;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] != '\n' && v == 0) {
      x.push_back(a[i]);

    } else {
      logLines.push_back(x);
      x.erase();
    }
  }
  std::cout << logLines.size() << std::endl;
}