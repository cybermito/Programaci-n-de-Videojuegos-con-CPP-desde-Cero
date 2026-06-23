#include "../include/GameMap.hpp"
#include <iostream>
#include <fstream> //Para leer y grabar archivos


GameMap::GameMap(){ //Constructor
    gameOver = false;    
    //Nos aseguramos al iniciar el programa que el puntero esté vacio para que no se rompa el programa
    PlayerCell = NULL;
    //cargamos el mapa desde el archivo map.txt llamando a la función correspondiente en el constructor
    LoadMapFromFile("map.txt");
}

/*mapCell::~MapCell(){

}*/

/*Definición de los getters y setters */
bool GameMap::getGameOver(){
    return gameOver;
}

void GameMap::setGameOver(bool playerGameOver){
    gameOver = playerGameOver;
}

/*Definición del método DrawMap para dibujar el mapa */
void GameMap::DrawMap(){
    for(int i=0; i < 15; i++){

        for(int p=0; p < 10; p++){
            /*Aquí vamos a dibujar el mapa según el contenido de la celda. Y también refrescarlo
            con el movimiento del jugador para que quede representado donde corresponde. */
            if(cells[i][p].id == '1'){
                std::cout << '#'; // Representa una pared
            } else if(cells[i][p].id == '0'){
                std::cout << ' '; // Representa un espacio vacío
            } else if(cells[i][p].id == 'H'){
                std::cout << 'H'; // Representa al jugador
            } else if(cells[i][p].id == '4'){
                std::cout << '$'; // Represente el cofre
            }

            //El símbolo del € no lo puede representar, tengo que arreglarlo.
        }
        std::cout << std::endl;
    }
}

/*Definición del método SetPlayerCell() para el control de posición del jugador en el mapa y su dibujado */
bool GameMap::SetPlayerCell(int playerX, int playerY){
    //std::cout << "Las coordenadas del jugador son: " << playerX << ", " << playerY << std::endl;
    //Comprobamos si la celda es una pared
    if (cells[playerY][playerX].isBlocked()){
        //No dejamos que se mueva el jugador
        return false;
    } else {
        //Comprobamos si es un cofre, un enemigo u otra cosa que podremos ir añadiendo a posteriori.
        if(cells[playerY][playerX].id == '4' or cells[playerY][playerX].id == '$'){
            setGameOver(true);
            DrawScreen("victory.txt");
            return true;
        } else {
            //Comprobamos si la celda está vacía o no para resetearla y repintar el mapa
            if (PlayerCell != NULL){
                PlayerCell->id = '0';
            }
            PlayerCell = &cells[playerY][playerX]; //Vamos a la dirección de memoria de la posición de la celda para tomar su valor.
            PlayerCell->id = 'H';
        }
       
        return true;
    }   
}

// void GameMap::DrawIntro(){
//     std::string line; //Guardaremos cada línea del archivo leído.
//     std::ifstream myIntro("intros/intro.txt"); //Creamos el objeto myIntro que guardará el contenido del archivo en memoria (input flow stream - Entrada flujo de datos.).

//     /*Comprobamos si el el archio del mapa está abierto. Nota: la primera vez que ejecutamos el juego
//     cómo el map.txt no existe nos dará error, así que sería conveniente crearlo a mano o crearlo desde el código. Inicialmente lo voy a generar a mano, pero lo ideal es crear un generador de laberintos y crear el archivo con este.
//     */
//     if (myIntro.is_open()){
        
//         while (getline(myIntro, line)){
//             // std::cout << line << std::endl; //Sirvió para comprobar la lectura y dibujado del mapa.
//             // Incluimos el mapa en el juego.

//             std::cout << line << std::endl;
//         }
        
//         //Esperamos hasta que el usuario pulse una tecla o enter.
//         std::cin >> line;

//     } else {
//         std::cout << "ERROR FATAL: ARCHIVO DE LA INTRO NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
//     }
// }

// void GameMap::DrawVictory(){
//     std::string line; //Guardaremos cada línea del archivo leído.
//     std::ifstream myIntro("intros/victory.txt"); //Creamos el objeto myIntro que guardará el contenido del archivo en memoria (input flow stream - Entrada flujo de datos.).

//     /*Comprobamos si el el archio del mapa está abierto. Nota: la primera vez que ejecutamos el juego
//     cómo el map.txt no existe nos dará error, así que sería conveniente crearlo a mano o crearlo desde el código. Inicialmente lo voy a generar a mano, pero lo ideal es crear un generador de laberintos y crear el archivo con este.
//     */
//     if (myIntro.is_open()){
        
//         while (getline(myIntro, line)){
//             // std::cout << line << std::endl; //Sirvió para comprobar la lectura y dibujado del mapa.
//             // Incluimos el mapa en el juego.

//             std::cout << line << std::endl;
//         }
        
//         //Esperamos hasta que el usuario pulse una tecla o enter.
//         //std::cin >> line;

//     } else {
//         std::cout << "ERROR FATAL: ARCHIVO DE VICTORIA NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
//     }
// }

void GameMap::DrawScreen(std::string filename){
    std::string line;
    std::ifstream screen("intros/" + filename);

    if(screen.is_open()){
        while (getline(screen, line)){
            std::cout << line << std::endl;
        }
        
    } else {
        std::cout << "ERROR FATAL: EL ARCHIVO " + filename + " NO SE HA PODIDO CARGAR. ¿EXISTE?" << std::endl;
    }
}

void GameMap::LoadMapFromFile(std::string mapName){
    std::string line; //Guardaremos cada línea del archivo leído.
    int row = 0; //Variable para saber en que fila del mapa estamos.
    std::ifstream myMap("mapas/" + mapName); //Creamos el objeto myMap que guardará el contenido del archivo en memoria (input flow stream - Entrada flujo de datos.).

    /*Comprobamos si el el archio del mapa está abierto. Nota: la primera vez que ejecutamos el juego
    cómo el map.txt no existe nos dará error, así que sería conveniente crearlo a mano o crearlo desde el código. Inicialmente lo voy a generar a mano, pero lo ideal es crear un generador de laberintos y crear el archivo con este.
    */
    if (myMap.is_open()){
        std::cout << "Mapa cargado correctamente..." << std::endl;
        //std::cout << "Inicio dibujado mapa desde archivo..." << std::endl;

        while (getline(myMap, line)){
            // std::cout << line << std::endl; //Sirvió para comprobar la lectura y dibujado del mapa.
            // Incluimos el mapa en el juego.

            for (int col = 0; col < line.length(); col++){
                cells[row][col].id = line[col];
            }

            row++;
        }

        //std::cout << "Fin dibujado mapa desde archivo..." << std::endl;

    } else {
        std::cout << "ERROR FATAL: ARCHIVO DE MAPA NO HA PODIDO SER CARGADO. ¿EXISTE?" << std::endl;
    }
}