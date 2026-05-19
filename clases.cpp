//POO: Clases e Instancias.
#include <iostream>

//Definición de una clase
class Cat{

    public:
        //Atributos de la clase, declarados como publicos y accesibles desde otras funciones y objetos
        std::string name;

        //Constructores de la clase (se pueden indicar más de uno.)
        Cat(){ //Constructor por defecto
            name = "Miníno";
        }

        Cat(std::string iname){ //Constructor donde podemos indicarle valores específicos al objeto
            name = iname;
        }

        //Definimos los métodos (acciones que realiza el objeto) = funciones
        void maullar(){
            std::cout << name << " dice miau." << std::endl;
        }

};

int main(){

    //Instanciamos la clase Cat
    //Si no indicamos nada ejecutará el contructor por defecto
    Cat miGato;
    Cat miGato2("Anakin");

    //Llamada a los atributos
    std::cout << miGato.name << std::endl;
    std::cout << miGato2.name << std::endl;

    //Llamada a los métodos
    miGato.maullar();
    miGato2.maullar();

    return 0;
}