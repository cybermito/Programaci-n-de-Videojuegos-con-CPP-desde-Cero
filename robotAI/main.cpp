#include "include/Robot.hpp"
#include <iostream>

int main(){
    Robot miRobot;
    Robot miRobot2("R2D2");


    miRobot.setName("R2D2");
    miRobot.saludar();
    std::cout << "El nombre del Robot es: " << miRobot.getName() << std::endl; 

    return 0;
}