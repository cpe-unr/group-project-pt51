
#include <iostream>

#include "menu.h"
#include "wav.h"
#include "metaData.h"


using namespace std;

int main(int argc, char* const argv[]){

    if(argc != 2){
        std::cout << "Correct usage: " << std::endl;
        std::cout << argv[0] << " filename" << std::endl;
        return 0;
    }
    /*
    WavManager wavM(argv[1]);
    if(wavM.getSize() < 1){
        return 0;
    }
    for(int i =0; i < wavM.getSize(); i++){
        std::cout << "File" << i << ": " << wavM.getWav(i)->getFileName() << std::endl;
        wavM.getWav(i)->printMetaData();
        std::cout << std::endl;
    }
    */
    menu<int> menuObj;
    //menuObj.getMenuChoice();
    menuObj.switchState();
    return 0;
}
