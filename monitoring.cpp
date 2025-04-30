#include "monitoring.hpp"

std::filesystem::path _compareFileDate(std::filesystem::path path1,
                                       std::filesystem::path path2) {
  std::filesystem::file_time_type time1 =
      std::filesystem::last_write_time(path1);
  std::filesystem::file_time_type time2 =
      std::filesystem::last_write_time(path2);
  std::filesystem::path selected;
  (time1 < time2) ? selected = path1 : selected = path2;
  return selected;
}
void monitoring::watcher() {}
void monitoring::fileList() {
  for (const auto &entry :
       std::filesystem::directory_iterator(_fileDirectory)) {
    _dirContents.push_back(entry.path());
  };
}
void monitoring::setDirectory(std::string PATH) {
  _fileDirectory = PATH;
  try {
    _d.assign(_fileDirectory);
    if (_d.path() != _fileDirectory)
      throw 201;

  } catch (...) {
    std::cout << "DIRECTORY ERROR\n";
  };
}
std::string monitoring::getDirectory() { return _fileDirectory; }
std::filesystem::path
monitoring::selectFile(std::vector<std::filesystem::path> dirContents) {
  std::filesystem::path newestFile = dirContents[0];
  if (dirContents.size() > 1) {
    for (int i = 1; i < dirContents.size(); i++) {
      if (_compareFileDate(newestFile, dirContents[i]) != newestFile)
        newestFile = dirContents[i];
    }
  }
  currentPath = newestFile;
  return newestFile;
}
std::string monitoring::getPath(){
    return currentPath.string();
} 