//POO: Encapsulación
#include <iostream>

class Perro{
    private:
        std::string mName;
        std::string mTipoLadrido;

    public:
        //Al indicar aquí los atributos (public) pueden ser modificados desde fuera de la clase
        //std::string mName; //La m significa miembro de la clase o atributo de la clase
        //std::string mTipoLadrido;

        Perro(std::string name, std::string tipoLadrido){
            mName = name;
            mTipoLadrido = tipoLadrido;
        }

        //Creamos un método para poder acceder al valor de los atributos privados.
        std::string getName(){
            return mName;
        }

        void setName(std::string newName){
            mName = newName;
        }

        void ladrar(){
            std::cout << mTipoLadrido << std::endl;
        }
};


int main(){

    Perro miPerro("Anakin", "oscuro");
    Perro miPerro2("R2D2", "Pi po pi");
    
    //miPerro.mName = "Darth Vader"; //Al ser el atributo public puedo modificarlo aquí
    std::cout << miPerro.getName() << std::endl;

    miPerro.setName("Darth Vader");
    std::cout << miPerro.getName() << std::endl;
    std::cout << miPerro2.getName() << std::endl;

    miPerro.ladrar();
    miPerro2.ladrar();

    return 0;
}