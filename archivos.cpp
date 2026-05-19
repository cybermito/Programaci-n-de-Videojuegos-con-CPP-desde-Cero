#include <iostream>
#include <fstream> //Librería para manipular archivos

int main(){

    std::string nombreUsuario = "";
    std::string line;
    
    //Escritura de archivos
    //Crea un archivo y lo deja abierto para escritura
    std::ofstream myfile("archivo.txt", std::ios::app); //El segundo argumento, nos permite comprobar si el archivo existe, si es así, agrega contenido al final de este y si no existe lo crea. Si no indicamos el segundo parámetro, cada vez que ejecutemos el programa, este, borrará el archivo y lo creará de nuevo vacío. 

    if (myfile.is_open()){
        myfile << "Hola Atigra Makers" << std::endl;
        myfile << "Mi nombre de usuario es: " << std::endl;

        std::cout << "Escribe tu nombre de usuario: ";
        //std::cin >> nombreUsuario; //Con std::cin usa como delimitador el espacio en blanco. Si quiero escribir algo como una línea completa, tengo que hacerlo del siguiente modo:
        std::getline(std::cin, nombreUsuario);
        myfile << nombreUsuario;
        myfile << std::endl;
        /*for (int i = 0; i < 10; i++){
            myfile << i << std::endl;
        }*/
    }

    myfile.close(); //Cerramos el archivo por seguridad

    //Lectura de archivos
    std::ifstream myfileRead("archivo.txt");
    if(myfileRead.is_open()){
        std::cout << "El archivo está preparado en modo lectura..." << std::endl;
        std::cout << "Este es su contenido: " << std::endl;

        while (getline(myfileRead, line))
        {
            std::cout << line << std::endl;
        }
        
    } else {
        std::cout << "El archivo no se encuentra o no se pudo abrir, comprobar si existe o si el antivirus lo está bloqueando." << std::endl;
    }

    myfileRead.close(); //Cerramos el archivo por seguridad
    return 0;
}