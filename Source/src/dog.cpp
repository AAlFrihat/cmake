#include "dog.h"
#include <iostream>

dog::dog(std::string name_param) : dog_name(name_param)
{
    std::cout << "Constructor for dog " << dog_name << " Called." << std::endl;
}

dog::~dog()
{
    std::cout << "Destructor for dog " << dog_name << " Called." << std::endl;
}