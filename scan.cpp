#include "scan.hpp"

int main() {

  try {
    read.open(filePath);

    if (read.fail())
      throw(1);

    std::cout << "OPENED!\n";

  } catch (...) {
    std::cout << "CANNOT OPEN FILE\n";
    return 101;
  };

  while(std::getline(read,a)){
    for(int i = 0; i < 20; i++){
        std::cout << a << std::endl;
    }
  }
}