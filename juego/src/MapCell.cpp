#include "../include/MapCell.hpp"

/*Cada celda va a tener 4 posibles valores
    H --> Jugador --> H
    0 --> Vacia --> 
    1 --> Pared --> #
    4 --> Cofre --> €
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