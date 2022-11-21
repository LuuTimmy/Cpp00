#include "Claptrap.hpp"

Claptrap::Claptrap() : _name(""), _hit_points(100), _energy_points(50), _attack_damage(20) {    

}

Claptrap::Claptrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20) {    
}

Claptrap::~Claptrap() {

}

void    Claptrap::attack(const std::string & target) {
    if (this->_energy_points > 0) {
        std::cout << "Claptrap " << this->_name << " attack "  << target << " causing " << _hit_points << " points of damage" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << "Claptrap " << this->_name << " don't have enought energy for attack" << std::endl;
}
void    Claptrap::takeDamage(unsigned int amount) {
    std::cout << "Claptrap " << this->_name << " took " << amount << " damage" << std::endl;
}

void    Claptrap::beRepaired(unsigned int amount) {
    if (this->_energy_points > 0) {
        std::cout << "Claptrap " << this->_name << " repaire " << amount << " hp" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << "Claptrap " << this->_name << " don't have enought energy for repair" << std::endl;
}