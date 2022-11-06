#include "Weapon.hpp"

Weapon::Weapon(std::string t) {
    type = t;
}

Weapon::~Weapon() {

}

std::string Weapon::getType() const { 
    return (type);
}

void    Weapon::setType(std::string t) {
    type = t;
}