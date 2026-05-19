//Tema funciones en C++
#include <iostream>

/* Sintaxis de una función 

tipo_dato_a_devolver nombreFuncion(Param1, param2, paramN, ...){
    Bloque de código a ejecutar.
}
*/

//Función sin parámetros y no devuelve ningún valor a la llamada.
void saludo(){
    std::string name;

    std::cout << "Dime tu nombre: ";
    std::cin >> name;
    std::cout << "Hola, " << name << " ¿cómo estás?" << std::endl;
}

//Función que recibe parámetros y devuelve un valor del tipo indicado en la función.
bool isPlayerDead(int hp){
    if (hp <= 0){
        return true;
    } else {
        return false;
    }

}

//Función que recibe varios parámetros sin return

void print(std::string message, std::string message2){
    std::cout << message << " " << message2 << std::endl;
}

int main(){
    int totalLife = 0;
    saludo();

    std::cout << "Dime el total de vida que te queda: ";
    std::cin >> totalLife;

    std::cout << isPlayerDead(totalLife) << std::endl;
    if (isPlayerDead(totalLife)){
        std::cout << "Game Over" << std::endl;
    } else {
        std::cout << "Te quedan " << totalLife << " vidas." << std::endl;
    }

    print("Hola", "¿Cómo estás?");
    
    return 0;
}