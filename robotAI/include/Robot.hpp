#pragma once //Para que solo se use una vez la cabecera
#include <iostream>


class Robot{
    
    private:
        std::string name;

    public:
        //Constructor
        Robot(std::string initName = "Robot01");
        void saludar();
        std::string getName();
        void setName(std::string newName);
};