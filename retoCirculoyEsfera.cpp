
/*
Reto práctico

Calcular el area de una circunferencia
- PI r²
Calcular el area de una esfera
- 4 * PI r²
Calcula el area de un cilindro.
- 2 * PI * r (r * altura)
Sacar el resultado por pantalla

*/
#include <iostream>

int main(){
    const float PI = 3.1416;
    int radio = 0;
    int altura = 0;
    float areaCircunferencia = 0;
    float areaEsfera = 0;
    float areaCilindro = 0;

    //Solicitamos el radio
    std::cout << "Introduce el radio de la circunferencia: ";
    std::cin >> radio;

    //Solicitamos la altura para el cilindro
    std::cout << "Introduce la altura del cilindro: ";
    std::cin >> altura;

    //Calculamos el area de la circunferencia, esfera y cilindro.
    areaCircunferencia = (PI * radio * radio);
    areaEsfera = (4 * PI * radio * radio);
    areaCilindro = (2 * PI * radio * (radio + altura));

    std::cout << "El area de la circunferencia es: " << areaCircunferencia << std::endl;
    std::cout << "El area de la esfera es: " << areaEsfera << std::endl;
    std::cout << "El area del cilindro es: " << areaCilindro << std::endl;

    return 0;
}

