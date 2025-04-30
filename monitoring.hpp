#include <iostream>
#include <fstream>
#include <filesystem>

class monitoring{
public:
void watcher();
void fileList();
void setDirectory(std::string PATH);
std::string getDirectory();
private:
std::string _fileDirectory;
std::filesystem::directory_entry _d;
std::vector<std::filesystem::path> _dirContents;


};