/*Juego de laberinto y búsqueda del tesoro. El movimiento será con el teclado. El entorno será
en la terminal. El juego consistirá en que uno o varios jugadores se moveran por el laberinto
en búsqueda de un tesoro y el primero que lo encuentre ganará.
*/

/* Pasos:
1. Crear el jugador

Nota: Para no llenar el main.cpp de clases y funciones, vamos a separar el proyecto en distintos
archivos para tenerlo todo más organizado, intentando seguir las reglas de buenas prácticas.
Crearemos archivo/s de encabezado y archivo/s fuente.

Encabezados: Donde definimos clases, funciones, etc... para poder usarlas en nuestro proyecto
Fuente: Archivos .cpp con el código fuente del proyecto, definicines de los encabezados para
indicar como se van a usar.



*/

#include <iostream>
#include "include/Player.hpp" //Incluimos la librería de cabecera donde definimos
//nuestras propias clases. Hay que indicar la ruta completa del archivo si no está
//en el mismo nivel que main.cpp
#include "include/MapCell.hpp" //Para el control de las celdas del mapa
#include "include/GameMap.hpp" //Clase generadora de mapas

int main(){
    //bool isGameOver = false;
    GameMap map; //Creamos el objeto mapa
    Player hero; //Creamos el objeto jugador

    //Dibujamos la intro
    map.DrawIntro();

    //std::cout << "¡Comienza el juego!" << std::endl;
    /* Creamos el game loop */
    while(!map.getGameOver()){
        //Aquí va todo el bucle del juego

        /* Para que no se estén viendo la pantalla de inicio y una lista interminable de mapas,
        se puede crear una instrucción que compruebe el sistema operativo que tienes y posteriormente
        usar un comando del systema que limpie la pantall de la terminal. En Linux "clear" y en windows es
        "cls"
        */
        system("clear");
        std::cout << "Para moverte por el mapa usa las teclas w, a, s, d más intro," << std::endl;
        //Tomamos la posición del jugador
        if(map.SetPlayerCell(hero.getPlayerX(), hero.getPlayerY())){
            if(!map.getGameOver()){ //Comprobamos si ha finalizado el juego para que no pinte el mapa
                //seguidamente después de salir la pantalla de fin de juego.
                //Dibujamos el mapa
                map.DrawMap();
            } else {
                std::cout << "Pulsa una tecla + enter para cerrar el juego" << std::endl;
            }
            
        } else {
            //Reseteamos la posición del jugador
            hero.resetToSafePosition();
            //Dibujamos el mapa
            map.DrawMap();
        }
        hero.callInput();
    }

    return 0;
} 