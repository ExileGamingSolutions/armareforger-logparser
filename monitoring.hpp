#include <filesystem>
#include <fstream>
#include <iostream>

class monitoring {
public:
  void watcher();
  void fileList();
  void setDirectory(std::string PATH);
  std::filesystem::path selectFile(std::vector<std::filesystem::path> dirContents);
  std::string getDirectory();
  std::string getPath();
  std::vector<std::filesystem::path> getDirContents();
private:
  std::filesystem::path _compareFileDate(std::filesystem::path path1,
                                         std::filesystem::path path2);
  std::string _fileDirectory;
  std::filesystem::directory_entry _d;
  std::vector<std::filesystem::path> _dirContents;
  std::filesystem::path currentPath;
};