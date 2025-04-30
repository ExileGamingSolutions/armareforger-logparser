#include <iostream>
#include <fstream>
#include <filesystem>

class monitoring{
public:
void watcher();
void pickFile();
void setDirectory(std::string PATH);
std::string getDirectory();
private:
std::string fileDirectory;
std::filesystem::directory_entry d;


};