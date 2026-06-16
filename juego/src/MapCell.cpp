#include "../include/MapCell.hpp"

/*Cada celda va a tener 3 posibles valores
    H --> Jugador
    0 --> Vacia
    1 --> Pared
*/

MapCell::MapCell(){ //Constructor

    id = 0; //Indica que inicialmente todas las celdas estarán vacías.

}

/*mapCell::~MapCell(){

}*/

//Definición del método para detectar una pared

bool MapCell::isBlocked(){
    if (id == '1' or id == '#'){
        return true;
    } else {
        return false;
    }
}