#include <iostream>
#include "../include/Player.hpp"

Player::Player(/* args */){//Definición del constructor
    x = 1;
    y = 1;
}

/*Player::~Player() //Definición del destructor
{
}*/

void Player::callInput(){
    /* Comentamos esta línea ya que era por motivos de pruebas.
    std::cout << "LLamada a la función callInput()"<< std::endl;
    */
   /* Vamos a crear el movimiento del jugador */
   char userInput = ' ';

   std::cin >> userInput;

   switch (userInput){

    case 'w':
        y++;
        std::cout << "El jugador se mueve arriba." << std::endl;
        break;
    case 's':
        y--;
        std::cout << "El jugador se mueve abajo." << std::endl;
        break;
    case 'a':
        x--;
        std::cout << "El jugador se mueve izquierda." << std::endl;
        break;
    case 'd':
        x++;
        std::cout << "El jugador se mueve derecha." << std::endl;
        break;
    default:

        break;
    }
    /* Fin control entrada teclado movimiento */
    /* Visualizamos las coordenadas del jugador */
    std::cout << "El jugador está en las coordenadas: " << x << ", " << y << std::endl; 
}