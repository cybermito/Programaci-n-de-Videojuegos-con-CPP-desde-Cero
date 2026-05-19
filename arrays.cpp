//Arrays y bucles en C++

#include <iostream>

int main(){

    //Definición de un array vacío
    std::string  personajesStarWars[5]; //Un array en C++ no puede crecer después de su tamaño inicializado

    //Se pueden inicializar los valores en la creación del array
    std::string imperioStarWars[4] = { "Darth Vader", "Emperador Palpatine", "Storm Troppers", "Estrella de la Muerte"};

    //Asignación de valor al primer elemento y sucesivos
    personajesStarWars[0] = "Anakin Skywalker";
    personajesStarWars[1] = "Luke Skywalker";
    personajesStarWars[2] = "Leia Skywalker";
    personajesStarWars[3] = "Maestro Yoda";
    personajesStarWars[4] = "Obi One Kenobi";

    std::cout << personajesStarWars[0] << std::endl;
    std::cout << imperioStarWars[3] << std::endl;

    return 0;
}