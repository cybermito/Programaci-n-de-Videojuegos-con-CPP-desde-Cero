#include "../include/Robot.hpp"
#include <iostream>


Robot::Robot(std::string initName) {
    // name = initName;
    setName(initName);
}

void Robot::saludar(){
    std::cout << "¡Hola!, Estoy moviendo mis brazos de metal para saludarte." << std::endl;
}

std::string Robot::getName(){
    return name;
}

void Robot::setName(std::string newName){

    if (newName.empty()){
        name = "noName";
    } else {
        name = newName;
    }
    
}