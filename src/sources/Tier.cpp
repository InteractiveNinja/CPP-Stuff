#include "../headers/Tier.h"
#include <iostream>


Tier::Tier(string name)
{
    this->name = name;
}

void Tier::sprechen() {
    std::cout << "Hallo!" << std::endl;
}