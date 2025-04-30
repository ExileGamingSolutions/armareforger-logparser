#include "monitoring.hpp"

void monitoring::watcher(){

}
void monitoring::fileList(){
    for(const auto &entry : std::filesystem::directory_iterator(_fileDirectory)){
        _dirContents.push_back(entry.path());
    };

}
void monitoring::setDirectory(std::string PATH){
    _fileDirectory = PATH;
    try{_d.assign(_fileDirectory);
        if(_d.path() != _fileDirectory) throw 201;
    
    }catch(...){
        std::cout << "DIRECTORY ERROR\n";
    };
}
std::string monitoring::getDirectory(){
    return _fileDirectory;
}