//Juego que vamos a ir creando 

#include <iostream>
#include <fstream>
#include <string>

//Tamaño mapa constantes
const int colMap = 5;
const int rowMap = 5;

//Función generadora del mapa
void drawMap(int heroPosX, int heroPosY, char gameMap[rowMap][colMap] ){
   
    for(int col = 0; col < colMap; col++){
        for(int row = 0; row < rowMap; row++){
            if (row == heroPosX && col == heroPosY){

                std::cout << 'H';

            } else {
                
                std::cout << gameMap[row][col];
            }
        }
        std::cout << std::endl; //para que dibuje la matriz correctamente y no en una sola línea.
    }
    std::cout << std::endl;
}

//Carga - Creación del archivo de datos del juego. 

std::string loadData(){
    std::ifstream inputFile("gameData.txt");
    std::string line;

    if (inputFile.is_open()) {
        std::cout << "Archivo gameData.txt abierto para lectura." << std::endl;
        
        // Leer la primera línea (asumida como datos de posición)
        if (std::getline(inputFile, line)) {
            return line;  // Retornar la primera línea si existe
        } else {
            // Archivo vacío o ilegible; retornar un predeterminado
            std::cout << "Archivo vacío; usando datos predeterminados." << std::endl;
            return "00";  // Consistente con la lógica de creación
        }
    } else {
        std::cout << "Archivo gameData.txt no existe; creándolo." << std::endl;
        std::ofstream outputFile("gameData.txt");
        if (outputFile.is_open()) {
            outputFile << "00";  // Escribir posiciones X e Y predeterminadas
            outputFile.close();  // Cierre explícito (opcional con RAII)
            return "00";  // Retornar los datos predeterminados
        } else {
            // Manejar fallo de creación (ej. lanzar excepción o retornar indicador de error)
            std::cerr << "Error: No se pudo crear el archivo." << std::endl;
            return "";  // O lanzar std::runtime_error("Fallo en creación de archivo");
        }
    }
    // No hay necesidad de cierre manual; los destructores lo manejan
}

void saveData(int posX, int posY){
    std::ofstream outputFile("gameData.txt");

    if (outputFile.is_open()){
        std::cout << "Archivo gameData.txt abierto para escritura." << std::endl;

        outputFile << posX;
        outputFile << posY;
    }

    outputFile.close();
}

int main(){

    bool isGameOver = false;
    int heroPosX = 0;
    int heroPosY = 0;
    char input = ' '; //Guardamos la pulsación de teclas
    std::string playerPosition = " ";

    //Creamos el array para el mapa
    //char gameMap[] = {'1', '1', '1', '1', '1'}; //Mapa de pruebas unidimensional
    //Mapa 2D
    char gameMap[rowMap][colMap] = {

        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'}
    
    };

    playerPosition = loadData();
    std::cout << "Posición inicial del Jugador, leída desde el archivo. " << playerPosition << std::endl;
    //heroPosX = playerPosition[0] - '0'; //Convierte un char en un int
    //heroPosY = playerPosition[1] - '0'; //Convierte un char en un int
    std::cout << "Posición X: " << heroPosX << std::endl;
    std::cout << "Posisión Y: " << heroPosY << std::endl;
    //Dibujamos el mapa
    drawMap(heroPosX, heroPosY, gameMap);

    //Inicia el juego
    while (!isGameOver){
        //Esperamos a que el usuario pulse (w, a, s, d) para mover el personaje.
        std::cout << "Movimiento (w s d a) pulsa q para salir: ";
        std::cin >> input;

        //Comprobamos la tecla pulsada y generamos el movimiento en cuestión.
        if (input == 'd'){
            heroPosX += 1;
        } else if (input == 'a'){
            heroPosX -= 1;
        } else if (input == 'w'){
            heroPosY -= 1;
        } else if (input == 's'){
            heroPosY += 1;
        } else if (input == 'q'){
            std::cout << std::endl;
            std::cout << "Fin del Juego" << std::endl;
            break;
        }
        
        //Controlamos que el personaje no se salga del mapa. 
        if (heroPosX <= 0){
            heroPosX = 0;
        } else if (heroPosX >= rowMap){
            heroPosX = rowMap - 1;
        }
        if (heroPosY <= 0){
            heroPosY = 0;
        }else if (heroPosY >= colMap){
            heroPosY = colMap -1;
        }
        
        drawMap(heroPosX, heroPosY, gameMap);
        saveData(heroPosX, heroPosY);
    }

    return 0;
}