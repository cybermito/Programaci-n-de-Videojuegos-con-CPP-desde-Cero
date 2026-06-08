#include "../include/GameMap.hpp"
#include <iostream>
#include <fstream> //Para leer y grabar archivos


GameMap::GameMap(){ //Constructor    
    //Nos aseguramos al iniciar el programa que el puntero esté vacio para que no se rompa el programa
    PlayerCell = NULL;
    //cargamos el mapa desde el archivo
    LoadMapFromFile();
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

void GameMap::LoadMapFromFile(){
    std::string line; //Guardaremos cada línea del archivo leído.
    std::ifstream myMap("mapas/map.txt"); 

    /*Comprobamos si el el archio del mapa está abierto. Nota: la primera vez que ejecutamos el juego
    cómo el map.txt no existe nos dará error, así que sería conveniente crearlo a mano o crearlo desde el código. Inicialmente lo voy a generar a mano, pero lo ideal es crear un generador de laberintos y crear el archivo con este.
    */
    if (myMap.is_open()){
        std::cout << "Mapa cargado correctamente..." << std::endl;
    } else {
        std::cout << "ERROR FATAL: ARCHIVO DE MAPA NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
    }
}