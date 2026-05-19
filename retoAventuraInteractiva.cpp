#include <iostream>

void ventana(){
    std::cout << "El día es soleado, todo está radiante, hay un gran campo verde";
    std::cout << " árboles, flores. Estás en el paraiso.";
    std::cout << "Piensas... ¡Esto es vida!" << std::endl;
    std::cout << "¡GAME OVER!" << std::endl;
}

void retrete(){
    std::cout << "Sientes un fuerte dolor de estómago, corres hacia el retrete" << std::endl;
    std::cout << "En ese momento te das cuenta que ten han envenenado..." << std::endl;
    std::cout << "Caes al suelo y mueres." << std::endl;
    std::cout << "¡GAME OVER!" << std::endl;
}

void pato(){
    std::cout << "¡El pato de hule es tu amigo! Te ayuda a recordar tu nombre, ";
    std::cout << "tu pasado y te dice que eres un gran programador de videojuegos.";
    std::cout << "¡Qué alivio! Ahora que sabes quién eres, ";
    std::cout << "puedes salir por la puerta y comenzar tu aventura ";
    std::cout << "como programador de videojuegos. ¡Buena suerte!"<< std::endl;
    std::cout << "¡GAME OVER!" << std::endl;

}

void puerta(){
    std::cout << "Sales por la puerta cómo para escapar de la habitación o de esa";
    std::cout << " realidad. Pero justo en el momento que estás fuera, justo al salir ";
    std::cout << "sientes como si algo faltara, algo que has olvidado y que posiblemente fuera importante par ti.";
    std::cout << "Intentas entrar nuevamente a la habitación, pero esta, ya no existe";
    std::cout << "la puerta ha desaparecido y tras ella, la oportunidad de recordar." << std::endl;
    std::cout << "¡GAME OVER!" << std::endl;
}


int main(){
    //Variables
    int respuestaJugador = 0;

    //Comienza la aventura
    std::cout << "¡Bienvenido a la aventura interactiva!" << std::endl;
    std::cout << std::endl;

    std::cout << "¡Oh no!. Te despiertas con un fuerte dolor de cabeza, no recuerdas nada de tu pasado y estás en un lugar desconocido. Un cuarto desconocido, lo único que alcanzas a ver, son, una ventana, un escusado, un pato de hule y una puerta." << std::endl;
    std::cout << "¿Qué quieres hacer?" << std::endl;
    std::cout << std::endl;

    std::cout << "1. Mirar por la ventana" << std::endl;
    std::cout << "2. Usar el retrete" << std::endl;
    std::cout << "3. Jugar con el pato de hule" << std::endl;
    std::cout << "4. Salir por la puerta" << std::endl;

    std::cout << "Respuesta: ";
    std::cin >> respuestaJugador;
    std::cout << std::endl;

    switch (respuestaJugador)
    {
    case 1:
        std::cout << "Has elegido Mirar por la ventana." << std::endl;
        ventana();
        break;
    case 2:
        std::cout << "Has elegido Usar el escusado." << std::endl;
        retrete();
        break;
    case 3:
        std::cout << "Has elegido Jugar con el pato de hule." << std::endl;
        pato();
        break;
    case 4:
        std::cout << "Salir por la puerta" << std::endl;
        puerta();
        break;
    
    default:
        std::cout << "Esa opción no es válida." << std::endl;
        break;
    };

    
    return 0;
}