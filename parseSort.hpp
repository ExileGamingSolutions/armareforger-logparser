#include <sstream>
#include <string>
#include <vector>
class parseSort {

public:
  parseSort();
  void filter(std::vector<std::string> param) {};

  // categories
  std::vector<std::string> resourses;
  std::vector<std::string> engine;
  std::vector<std::string> init;
  std::vector<std::string> gui;
  std::vector<std::string> profiling;
  std::vector<std::string> script;
  std::vector<std::string> backend;
  std::vector<std::string> def;
  std::vector<std::string> world;
  std::vector<std::string> render;
  std::vector<std::string> network;
  std::vector<std::string> platform;

  enum _sortedLine {
    RESOURSES,
    ENGINE,
    INIT,
    GUI,
    PROFILING,
    SCRIPT,
    BACKEND,
    DEF,
    WORLD,
    RENDER,
    NETWORK,
    PLATFORM

  };
  // TODO: monitoring
};