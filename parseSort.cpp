#include "parseSort.hpp"

 parseSort::parseSort(std::vector<std::string> param){
unParsedLog = param;
};
void parseSort::filter(){
    std::string a;
    std::stringstream ss(a);
    for(int i = 0; i < unParsedLog.size(); i++){
        parseSort::_sortedLine _selected;
        std::string placeH = unParsedLog[i];
        if(placeH.find("RESOURSES") && !_selected) _selected = RESOURSES;
        if(placeH.find("ENGINE")&& !_selected) _selected = ENGINE ;
        if(placeH.find("INIT")&& !_selected) _selected =  INIT;
        if(placeH.find("GUI")&& !_selected) _selected = GUI ;
        if(placeH.find("PROFILING")&& !_selected) _selected =  PROFILING;
        if(placeH.find("SCRIPT")&& !_selected) _selected =  SCRIPT;
        if(placeH.find("BACKEND")&& !_selected) _selected =  BACKEND;
        if(placeH.find("DEF")&& !_selected) _selected =  DEF;
        if(placeH.find("WORLD")&& !_selected) _selected =  WORLD;
        if(placeH.find("RENDER")&& !_selected) _selected = RENDER ;
        if(placeH.find("NETWORK")&& !_selected) _selected = NETWORK ;
        if(placeH.find("PLATFORM")&& !_selected) _selected = PLATFORM ;

        }
  

};