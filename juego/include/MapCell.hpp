/* para manejar cada una de las celdas del mapa */
#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef MAPCELL_HPP
#define MAPCELL_HPP

/*Cada celda va a tener 3 posibles valores
    H --> Jugador
    0 --> Vacia
    1 --> Pared
*/
class MapCell
{
    private:

    protected:
    
    public:
    MapCell();

    char id; //lo hacemos char para facilitar el dibujado de carácteres.

};

#endif