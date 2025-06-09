#include "include/sub/parseSort.hpp"

void parseSort::filter(std::vector<std::string> param) {
  std::string a;
  std::stringstream ss(a);
  for (int i = 0; i < param.size() - 1; i++) {
    parseSort::_sortedLine _selected = _NULL;
    std::string placeH = param[i];
    if (placeH.find("RESOURSES") != std::string::npos && _selected == _NULL)
      _selected = RESOURSES;
    if (placeH.find("ENGINE") != std::string::npos && _selected == _NULL)
      _selected = ENGINE;
    if (placeH.find("INIT") != std::string::npos && _selected == _NULL)
      _selected = INIT;
    if (placeH.find("GUI") != std::string::npos && _selected == _NULL)
      _selected = GUI;
    if (placeH.find("PROFILING") != std::string::npos && _selected == _NULL)
      _selected = PROFILING;
    if (placeH.find("SCRIPT") != std::string::npos && _selected == _NULL)
      _selected = SCRIPT;
    if (placeH.find("BACKEND") != std::string::npos && _selected == _NULL)
      _selected = BACKEND;
    if (placeH.find("DEF") != std::string::npos && _selected == _NULL)
      _selected = DEF;
    if (placeH.find("WORLD") != std::string::npos && _selected == _NULL)
      _selected = WORLD;
    if (placeH.find("RENDER") != std::string::npos && _selected == _NULL)
      _selected = RENDER;
    if (placeH.find("NETWORK") != std::string::npos && _selected == _NULL)
      _selected = NETWORK;
    if (placeH.find("PLATFORM") != std::string::npos && _selected == _NULL)
      _selected = PLATFORM;
    switch (_selected) {
    default:
      break;
    case RESOURSES:
      resourses.push_back(param[i]);
      break;
    case ENGINE:
      engine.push_back(param[i]);
      break;
    case INIT:
      init.push_back(param[i]);
      break;
    case GUI:
      gui.push_back(param[i]);
      break;
    case PROFILING:
      profiling.push_back(param[i]);
      break;
    case SCRIPT:
      script.push_back(param[i]);
      break;
    case BACKEND:
      backend.push_back(param[i]);
      break;
    case DEF:
      def.push_back(param[i]);
      break;
    case WORLD:
      world.push_back(param[i]);
      break;
    case RENDER:
      render.push_back(param[i]);
      break;
    case NETWORK:
      network.push_back(param[i]);
      break;
    case PLATFORM:
      platform.push_back(param[i]);
      break;
    }
  }
};
