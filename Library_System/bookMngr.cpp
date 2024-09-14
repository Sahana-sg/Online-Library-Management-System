#include "bookMngr.hpp"

BookMngr* BookMngr::Instance = nullptr;

BookMngr* BookMngr::getInstance(){
    if(Instance == nullptr){
        Instance = new BookMngr();
    }
    return Instance;
}