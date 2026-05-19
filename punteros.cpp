#include <iostream>

int main(){
    //Declaramos una variable
    int direction = 3509;

    //Declaramos un puntero
    int *puntero;

    //Guardamos la dirección de memoria de direction
    puntero = &direction;

    std::cout << "Valor de la variable puntero:  " << puntero << std::endl;
    std::cout << "Valor del contenido de la dirección de memoria de puntero: " << *puntero << std::endl;
    std::cout << "Valor de la dirección de memoria" << &direction << std::endl;
    
    return 0;
}