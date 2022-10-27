#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << name << " is here" << std::endl;
}

void    Zombie::setName(std::string n) {
    name = n;
}

Zombie::~Zombie() {

};