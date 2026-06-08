#include "../include/GameMap.hpp"
#include <iostream>


GameMap::GameMap(){ //Constructor    
    //Nos aseguramos al iniciar el programa que el puntero esté vacio para que no se rompa el programa
    PlayerCell = NULL;
}

/*mapCell::~MapCell(){

}*/

/*Definición del método DrawMap para dibujar el mapa */
void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            /*Aquí vamos a dibujar el mapa según el contenido de la celda. Y también refrescarlo
            con el movimiento del jugador para que quede representado donde corresponde. */
            if(cells[i][p].id == 1){
                std::cout << "#"; // Representa una pared
            } else if(cells[i][p].id == 0){
                std::cout << "0"; // Representa un espacio vacío
            } else if(cells[i][p].id == 'H'){
                std::cout << "H"; // Representa al jugador
            }
        }
        std::cout << std::endl;
    }
}

/*Definición del método SetPlayerCell() para el control de posición del jugador en el mapa y su dibujado */
void GameMap::SetPlayerCell(int playerX, int playerY){
    //std::cout << "Las coordenadas del jugador son: " << playerX << ", " << playerY << std::endl;
    //Comprobamos si la celda está vacía o no para resetearla y repintar el mapa
    if (PlayerCell != NULL){
        PlayerCell->id = 0;
    }
    PlayerCell = &cells[playerY][playerX]; //Vamos a la dirección de memoria de la posición de la celda para tomar su valor.
    PlayerCell->id = 'H';
}