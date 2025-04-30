#include "monitoring.hpp"

void monitoring::watcher(){

}
void monitoring::pickFile(){


}
void monitoring::setDirectory(std::string PATH){
    fileDirectory = PATH;
    try{d.assign(fileDirectory);
        if(d.path() != fileDirectory) throw 201;
    
    }catch(...){
        std::cout << "DIRECTORY ERROR\n";
    };
}
std::string monitoring::getDirectory(){
    return fileDirectory;
}