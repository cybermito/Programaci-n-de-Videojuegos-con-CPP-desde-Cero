#include "../include/GameMap.hpp"
#include <iostream>


GameMap::GameMap(){ //Constructor    

}

/*mapCell::~MapCell(){

}*/

void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            std::cout << 0;
        }
        std::cout << std::endl;
    }
}