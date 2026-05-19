//POO: Polimorfismo

#include <iostream>

//Creamos la clase principal - base - superclase
class Mage{
    protected:

        int power, life;

    public:

        //Constructor
        Mage(int basePower, int baseLife){

            power = basePower;
            life = baseLife;

        }

        float damage(){ //retorna el daño que realizará el mago.
            return power;
        }

        void getDamage(int value){
            life -= value;
            std::cout << "Al mago le quedan: " << life << " de vida." << std::endl;
        }

        void printLife(){
            std::cout << "Te quedan " << life << " de vida." << std::endl;
        }

        //Este método solo está para comprobar que todo funciona inicialmente
        void spellGreet(){ //spell significa hechizo y greet saludo.
            std::cout << "Saludos desde el mundo mágico..." << std::endl;
        }
};

//Creamos las clases hijas de Mago.
class IceMage : public Mage{

    public:
        IceMage(int basePower, int baseLife) : Mage(basePower, baseLife){
            power = basePower + 1;
            life = baseLife;
        }
};

class FireMage : public Mage{

    public:
        FireMage(int basePower, int baseLife) : Mage(basePower, baseLife){
            power = basePower;
            life = baseLife + 10;
        }
};

int main(){
    /*Mage harry(1, 20);
    harry.spellGreet();*/ //Se usaron al inicio para comprobar que todo funcionaba bien

    //El polimorfismo se puede hacer de dos formas en C++, una de ellas la vemos en el ejemplo de las notas.md
    //La otra forma aquí
    //Creamos un puntero de tipo Mago vacío
    Mage *currentMage;

    //Creamos los personajes
    FireMage gandalf(10, 10);
    IceMage dumbledore(10, 10);

    currentMage = &gandalf; //el puntero apunta a gandalf, ahora podemos modificar y acceder a los atributos y métodos de gandalf. Clase hija
    currentMage->getDamage(1); //Aplicamos daño a gandalf, que es donde apunta currentMage. Este cambio queda grabado en el objeto.

    //Para usar el otro personaje, cambiamos donde apunta el puntero.
    currentMage = &dumbledore;
    currentMage->getDamage(5); //Aplicamo daño a dumbledore. Este cambio queda grabado en el objeto

    //Aquí podemos comprobar que el polimorfismo funciona, ya que vemos los valores modificados en cada objeto.
    gandalf.printLife();
    dumbledore.printLife();


    return 0;
}