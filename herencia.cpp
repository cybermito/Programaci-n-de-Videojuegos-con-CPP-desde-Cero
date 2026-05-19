//POO: Herencia. Heredar de una superclase los atributos y métodos hacia una clase hija.

#include <iostream>

class Mago{
    protected: //Sigue siendo privada pero accesible por las clases hijas.
        int magia, vida, poder;

    public:

        Mago(int iMagia, int iVida, int iPoder){ //La i delante de las varibles es para indicar el valor de la instancia.
            magia = iMagia;
            vida = iVida;
            poder = iPoder;

        }

        void hechizo(){
            std::cout << "Fuegos artificiales!! " << poder << std::endl;
        }


};

//Creamos otra clase que hereda de Mago
class MagoHielo : public Mago{
    public:
        //El constructor debe también heredar del construtctor de la clase principal
        MagoHielo(int iMagia, int iVida, int iPoder):Mago(iMagia, iVida, iPoder){
                magia = iMagia;
                vida = iVida;
                poder = iPoder + 10;
        }
};

int main(){

    Mago gandalf(100, 10, 20);
    MagoHielo magoHelado(100,10,20);
    gandalf.hechizo();
    magoHelado.hechizo();//Devolverá Fuegos artificiales 30, ya que le suma 10 al poder en su constructor.
    

    return 0;
}