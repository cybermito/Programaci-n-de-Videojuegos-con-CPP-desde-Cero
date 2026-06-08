/* para manejar cada una de las celdas del mapa */
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef GAMEMAP_HPP
#define GAMEMAP_HPP

#include "MapCell.hpp" /*Nos servirá para crear un array de celdas de mapa con su come-
tido cada una */

class GameMap
{
    private:

    protected:
    
    public:
    GameMap();
    MapCell *PlayerCell; //Puntero de la celda donde esté ubicado el jugador.
    MapCell cells[15][10]; //Creamos la matriz de celdas previamente definidas

    /*Función que dibujará el map */
    void DrawMap();
    /*Función que obtiene la posición del jugador y actualizará el mapa */
    void SetPlayerCell(int playerX, int playerY);

};

#endif