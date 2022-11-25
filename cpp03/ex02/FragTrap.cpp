#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("[]", 100, 100, 30) {
    std::cout << "FragTrap " << this->_name << " default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << this->_name << " constructor" << std::endl;
}

FragTrap::FragTrap(std::string name, int hp, int energy, int attackDamage) : ClapTrap(name, hp, energy, attackDamage) {
    std::cout << "FragTrap " << this->_name << " constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src._name, src._hit_points, src._energy_points, src._attack_damage) {
    *this = src;
    return ;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " destructor" << std::endl;
}


void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " ask for high five" << std::endl;
}

void    FragTrap::attack(const std::string & target) {
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

FragTrap &  FragTrap::operator=(FragTrap const & src) {
    ClapTrap::operator=(src);
    return (*this);
}