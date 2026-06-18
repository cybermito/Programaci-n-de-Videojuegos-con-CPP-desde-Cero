/* para manejar cada una de las celdas del mapa */
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef MAPCELL_HPP
#define MAPCELL_HPP

/*Cada celda va a tener 4 posibles valores
    H --> Jugador --> H
    0 --> Vacia --> 
    1 --> Pared --> #
    4 --> Cofre --> €

*/
class MapCell
{
    private:

    protected:
    
    public:
    MapCell();

    char id; //lo hacemos char para facilitar el dibujado de carácteres.

    bool isBlocked(); // Método para comprobar si la celda es una pared o no.

};

#endif