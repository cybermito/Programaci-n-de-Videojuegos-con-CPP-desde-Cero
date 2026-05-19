//POO: Abstracción

#include <iostream>

class Humano{

    public:

        Humano(int spawnage){
            age = spawnage;
        }

        void think(){
            std::cout << getThinkMessage() << std::endl; //La función getThinkMessage es la abstracción
            //Es un método privado que podemos usar pero desde dentro de la clase, el cuál tiene
            //una serie de instrucciones más o menos complejas pero que el programador no sabe que hace
            //exactamente, si no, que espera un resultado que es, en este caso, que está pensando. 
        }

        int age;
    private:

        int socialLevel;
        int inteligence;
        int luck;

        //Definición del método abstracto.
        std::string getThinkMessage(){
            if(socialLevel + luck > 100){
                return "Estoy teniendo pensamientos felices :D.";
            } else if(luck > inteligence) {
                return "Tengo mucha suerte.";
            } else if(age < 18){
                return "Soy muy pequeño.";
            } else {
                return "No pienso nada.";
            }
        }

        

};

int main(){

    Humano pepito(19);

    pepito.think();

    return 0;
}