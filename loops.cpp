//Bucles for, while y do-while
#include <iostream>

int main(){
    int contador = 0;
    bool isGreen = true;
    char input = ' ';

    //Bucle while
    while(contador < 100){
        std::cout << "Contador = " << contador << std::endl;
        contador += 1;
    }



    //Bucle do-while, la lógica se ejecuta al menos una vez
    do{
        std::cout << "El semáforo está verde..." << std::endl;
        std::cout << "¿Sigue verde el semáforo? (s/n) ";
        std::cin >> input;

        if (input == 'n'){
            isGreen = false;
            std::cout << "El semáforo cambió a rojo. ¡Adiós!" << std::endl;
        }

    }while(isGreen);

    //Bucle for
    for (int i = 0; i < 100; i++){
        std::cout << i << std::endl;
        //Aquí podemos poner más bloques de código con condiciones, etc
        //Para controlar el funcionamiento del programa. 
    }


    return 0;
}