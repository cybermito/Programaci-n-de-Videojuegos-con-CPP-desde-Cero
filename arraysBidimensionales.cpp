//Arrays Bidimensionales

#include <iostream>

int main(){

    int sizeOfArray = 5;

    //Definición de un array vacío
    std::string  personajesStarWars[sizeOfArray]; //Un array en C++ no puede crecer después de su tamaño inicializado
    
    //Definición de un array bidimensional filas x columnas
    int arrayBi[5][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10, 11, 12},
        {13, 14, 15}
    };

    //Se pueden inicializar los valores en la creación del array
    std::string imperioStarWars[] = { "Darth Vader", "Emperador Palpatine", "Storm Troppers", "Estrella de la Muerte", "Tie Figther"};

    //Asignación de valor al primer elemento y sucesivos
    personajesStarWars[0] = "Anakin Skywalker";
    personajesStarWars[1] = "Luke Skywalker";
    personajesStarWars[2] = "Leia Skywalker";
    personajesStarWars[3] = "Maestro Yoda";
    personajesStarWars[4] = "Obi One Kenobi";

    //Vamos a recorrer los arrays unidimensionales con un bucle for
    for (int i = 0; i < sizeOfArray; i++){
        std::cout << personajesStarWars[i] << std::endl;
        std::cout << imperioStarWars[i] << std::endl;
    }

    //Ahora el array bidimensional
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            std::cout << "Columna " << j << " Fila " << i << " Valor: " << arrayBi[i][j] << std::endl; 
        }
    }
    

    return 0;
}