//Como pedir datos al usuario

#include <iostream>

int main(){

    int edad = 0;
    
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    std::cout << "Hola, tu edad es " << edad << " años." << std::endl;
    
    return 0;
}