#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
    private:

    protected:
        //Movimiento del jugador.
        int x, y; //Coordenadas nuevas
        int lastX, lastY; //Coordenadas anteriores
        
        
    public:
        Player(); //Constructor
        //virtual ~Player(); //Destructor, lo comentamos temporalmente.

        //Declaramos los getters y setters para dar acceso al movimiento del jugador.
        int getPlayerX();
        int getPlayerY();
        int getPlayerLastX();
        int getPlayerLastY();
        
        /*
        void setPlayerX(int posX);        
        void setPlayerY(int posY);
        */
        void setPlayerLastX(int lastPosX);
        void setPlayerLastY(int lastPosY);
        

        //Método para la detección de las pulsaciones de las teclas y el movimiento del jugador
        void callInput();
        //Método para resetear la posición del jugador a su estado anterior.
        void resetToSafePosition();

};

#endif //PLAYER_HPP