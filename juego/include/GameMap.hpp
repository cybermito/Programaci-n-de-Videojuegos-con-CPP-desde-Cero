/* para manejar cada una de las celdas del mapa */
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef GAMEMAP_HPP
#define GAMEMAP_HPP

#include <iostream>

#include "MapCell.hpp" /*Nos servirá para crear un array de celdas de mapa con su come-
tido cada una */

class GameMap
{
    private:

    protected:

        bool gameOver;
    
    public:
        GameMap();
        MapCell *PlayerCell; //Puntero de la celda donde esté ubicado el jugador.
        MapCell cells[15][10]; //Creamos la matriz de celdas previamente definidas

        //Getters y Setters de los atributos protegidos
        bool getGameOver();
        void setGameOver(bool playerGameOver);

        /*Función que dibujará el map */
        void DrawMap();
        /*Función que dibujará la pantalla de introducción*/
        //void DrawIntro();
        /*Función que dibujará la pantalla final cuando ganamos*/
        //void DrawVictory();

        void DrawScreen(std::string filename); //Fusionamos DrawIntro y DrawVictory

        /*Función que obtiene la posición del jugador y actualizará el mapa */
        bool SetPlayerCell(int playerX, int playerY);

        /*Fución para cargar el archivo del mapa*/
        void LoadMapFromFile(std::string mapName);

};

#endif