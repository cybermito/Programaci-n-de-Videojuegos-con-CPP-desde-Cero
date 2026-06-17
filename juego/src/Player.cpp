#include <iostream>
#include "../include/Player.hpp"

Player::Player(/* args */){//Definición del constructor
    x = 1;
    y = 1;
}

/*Player::~Player() //Definición del destructor
{
}*/
//Definición de los getters para los atributos protegidos
int Player::getPlayerX(){
    return x;
}

int Player::getPlayerY(){
    return y;
}

int Player::getPlayerLastX(){
    return lastX;
}

int Player::getPlayerLastY(){
    return lastY;
}

//Definición de los setters para los atributos protegidos.
/*
void Player::setPlayerX(int playerX){
    x = playerX;
}

void Player::setPlayerY(int playerY){
    y = playerY;
}
*/

void Player::setPlayerLastX(int playerLastPosX){
    lastX = playerLastPosX;
}

void Player::setPlayerLastY(int playerLastPosY){
    lastY = playerLastPosY;
}


void Player::callInput(){
    /* Comentamos esta línea ya que era por motivos de pruebas.
    std::cout << "LLamada a la función callInput()"<< std::endl;
    */
   /* Vamos a crear el movimiento del jugador */
   char userInput = ' ';

   std::cin >> userInput;

   switch (userInput){

    case 'w':
        setPlayerLastY(y);
        setPlayerLastX(x);
        y--;
        //std::cout << "El jugador se mueve arriba." << std::endl;
        break;
    case 's':
        setPlayerLastY(y);
        setPlayerLastX(x);
        y++;
        //std::cout << "El jugador se mueve abajo." << std::endl;
        break;
    case 'a':
        setPlayerLastX(x);
        setPlayerLastY(y);
        x--;
        //std::cout << "El jugador se mueve izquierda." << std::endl;
        break;
    case 'd':
        setPlayerLastX(x);
        setPlayerLastY(y);
        x++;
        //std::cout << "El jugador se mueve derecha." << std::endl;
        break;
    default:

        break;
    }
    
    /* Fin control entrada teclado movimiento */
    /* Visualizamos las coordenadas del jugador */
    //std::cout << "El jugador está en las coordenadas: " << x << ", " << y << std::endl; 
}

//Definición del método que reseteará las posiciones x e y del jugador
void Player::resetToSafePosition(){
    x = getPlayerLastX();
    y = getPlayerLastY();
}