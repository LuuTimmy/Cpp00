#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("[]", 100, 50, 20) {
    std::cout << "ScavTrap " << this->_name << " default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap " << this->_name << " constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hp, int energy, int attackDamage) : ClapTrap(name, hp, energy, attackDamage){
    std::cout << "ScavTrap " << this->_name << " constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name, src._hit_points, src._energy_points, src._attack_damage) {
    *this = src;
    return ;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " destructor" << std::endl;
}


void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " enter to guard gate mode" << std::endl;
}

void    ScavTrap::attack(const std::string & target) {
    if (this->_hit_points <= 0) {
        std::cout << "ScavTrap " << this->_name << " can't attack beceause he is dead" << std::endl;
    }
    else if (this->_energy_points > 0) {
        std::cout << "ScavTrap " << this->_name << " attack "  << 
            target << " causing " << _hit_points << " points of damage" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << "ScavTrap " << this->_name << " don't have enought energy for attack" << std::endl;
}


ScavTrap &  ScavTrap::operator=(ScavTrap const & src) {
    ClapTrap::operator=(src);
    return (*this);
}