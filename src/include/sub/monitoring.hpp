#include <filesystem>
#include <fstream>
#include <iostream>
#include <thread>
#include <vector>

class monitoring {
public:
  void watcher();
  void fileList();
  void setDirectory(std::string PATH);
  bool getState();
  void Start();
  void Stop();
  std::filesystem::path selectFile();
  std::string getDirectory();
  std::string getPath();
  std::vector<std::filesystem::path> getDirContents();

  std::filesystem::path compareFileDate(std::filesystem::path path1,
                                        std::filesystem::path path2);

private:
  std::string _fileDirectory;
  std::filesystem::directory_entry _d;
  std::vector<std::filesystem::path> _dirContents;
  std::filesystem::path currentPath;
  bool start = 0;
};
