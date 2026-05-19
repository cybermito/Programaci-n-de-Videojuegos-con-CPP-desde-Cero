/* Operadores relacionales y estructuras de control if/else/else if/ switch-case */

#include <iostream>

int main(){

    int math = 0;
    int biology = 0;

    std::cout << "Introduce tu nota de Matemáticas: ";
    std::cin >> math;

    std::cout << "Introduce tu nota de Biología: ";
    std::cin >> biology;

    //Condiciones if/else/else if
    if (math == 10){
        std::cout << "Sacaste Matrícula en Matemáticas" << std::endl;
    } else if (math > 5){
        std::cout << "Aprobáste Matemáticas" << std::endl;
    } else {
        std::cout << "Suspendiste Matemáticas" << std::endl;
    }

    if (biology <= 5){
        std::cout << "Suspendiste Biología" << std::endl;
    } else {
        std::cout << "Aprobaste Biología" << std::endl;
    }

    //Condición switch-case

    switch (math)
    {
    case 10:
        std::cout << "Sacaste Matrícula en Matemáticas" << std::endl;
        break;

    case 5:
        std::cout << "Aprobaste matemáticas por los pelos. :)" << std::endl;
        break;
    
    case 0:
        std::cout << "Suspendiste Matemáticas" << std::endl;
        break;
    
    default:
        std::cout << "Valor no establecido, elige otro." << std::endl;
        break;
    }


    return 0;
}