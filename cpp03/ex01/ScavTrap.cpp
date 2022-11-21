#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " construstor" << std::endl;
}

ScavTrap::ScavTrap(std::string str) {
    std::cout << "ScavTrap " << this->_name << " construstor" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " destructor" << std::endl;
}

void    ScavTrap::guardGate() {
    
}