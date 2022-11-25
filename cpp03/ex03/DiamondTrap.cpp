#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("[]_clap_name", 100, 50, 30) {
    this->_name = "[]";
    std::cout << "DiamondTrap " << this->_name << " default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30) {
    this->_name = name;
    std::cout << "DiamondTrap " << this->_name << " constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name, int hp, int energy, int attackDamage) : ClapTrap(name + "_clap_name", hp, energy, attackDamage) {
    this->_name = name;
    std::cout << "DiamondTrap " << this->_name << " constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
    *this = src;
    return ;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " destructor" << std::endl;
}

void       DiamondTrap::attack(const std::string & target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << "my name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl; 
}


DiamondTrap &  DiamondTrap::operator=(DiamondTrap const & src) {
    ClapTrap::operator=(src);
    this->_name = src._name;
    return (*this);
}