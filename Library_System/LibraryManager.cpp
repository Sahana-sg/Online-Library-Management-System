#include "LibraryManager.hpp"

LibraryMngr* LibraryMngr::Instance = nullptr;

LibraryMngr* LibraryMngr::getInstance(){
    if(Instance == nullptr){
        Instance = new LibraryMngr();
    }
    return Instance;
}