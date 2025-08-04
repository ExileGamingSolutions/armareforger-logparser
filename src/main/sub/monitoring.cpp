#include "sub/monitoring.hpp"
#include <filesystem>

std::filesystem::path monitoring::compareFileDate(std::filesystem::path path1,
                                                  std::filesystem::path path2) {
  /*  std::filesystem::file_time_type time1 =
        std::filesystem::last_write_time(path1);
    std::filesystem::file_time_type time2 =
        std::filesystem::last_write_time(path2);
    std::filesystem::path selected;
     if (time1 < time2) {
       selected = path1;
     } else {
       selected = path2;
     }*/
  return path1;
}

void monitoring::Start() { start = true; }
void monitoring::Stop() { start = false; }
bool monitoring::getState() { return start; }
// this functions should be continously ran to check for directory changes
void monitoring::watcher() {
  while (start == true) {
    if (selectFile() != currentPath) {
      // wait 5 minutes before checking again
      std::this_thread::sleep_for(std::chrono::seconds(300));
      watcher();
    } else {
      currentPath = selectFile();
    };
  }
}
void monitoring::fileList() {
  for (const auto &entry :
       std::filesystem::directory_iterator(_fileDirectory)) {
    std::filesystem::path p =
        std::string(_fileDirectory) + "/" + std::string(entry.path());
    _dirContents.push_back(p);
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

std::filesystem::path monitoring::selectFile() {
  std::filesystem::path newestFile = _dirContents[0];
  if (_dirContents.size() > 1) {
    for (int i = 0; i < _dirContents.size(); i++) {
      if (monitoring::compareFileDate(newestFile, _dirContents[i]) !=
          newestFile)
        newestFile = _dirContents[i];
    }
  }
  return newestFile;
}
std::string monitoring::getPath() { return currentPath.string(); }
