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
    MapCell cells[15][10]; //Creamos la matriz de celdas previamente definidas

    /*Función que dibjará el map */
    void DrawMap();

};

#endif