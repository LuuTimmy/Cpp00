#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::attack() const {
    if (_weapon != NULL)
        std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " don't have weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

