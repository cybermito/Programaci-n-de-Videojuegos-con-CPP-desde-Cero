#pragma once //Evita que la cabecera sea llamada más de una vez en la misma sesión de ejecución.

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
    private:

    protected:
        
    public:
        Player(); //Constructor
        //virtual ~Player(); //Destructor, lo comentamos temporalmente.

        void callInput();
};

#endif //PLAYER_HPP