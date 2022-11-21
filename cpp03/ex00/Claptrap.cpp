#include "Claptrap.hpp"

Claptrap::Claptrap() : _name("[]"), _hit_points(10), _energy_points(10), _attack_damage(10) {
}

Claptrap::Claptrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(10) {    
}

Claptrap::Claptrap(std::string str, int hp, int energy, int attackDamage) : 
    _name(str), _hit_points(hp), _energy_points(energy), _attack_damage(attackDamage) {
}

Claptrap::Claptrap(Claptrap const & src) : 
    _name(src._name), 
    _hit_points(src._hit_points), 
    _energy_points(src._energy_points), 
    _attack_damage(src._attack_damage) {
    
    *this = src;
    return ;
}

Claptrap::~Claptrap() {
}

void    Claptrap::attack(const std::string & target) {
    if (this->_hit_points <= 0) {
        std::cout << "Claptrap " << this->_name << " can't attack beceause he is dead" << std::endl;
    }
    else if (this->_energy_points > 0) {
        std::cout << "Claptrap " << this->_name << " attack "  << 
            target << " causing " << _hit_points << " points of damage" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << "Claptrap " << this->_name << " don't have enought energy for attack" << std::endl;
}

void    Claptrap::takeDamage(unsigned int amount) {
    if (this->_hit_points <= 0)
        std::cout << "Claptrap " << this->_name << " is already dead" << std::endl;
    else {
        std::cout << "Claptrap " << this->_name << " took " << amount << " damage" << std::endl;
        this->_hit_points -= amount;
        if (this->_hit_points <= 0) {
            this->_hit_points = 0;
            std::cout << "Claptrap " << this->_name << " is dead" << std::endl;
        }
        else {
            std::cout << "Claptrap " << this->_name << " has " << this->_hit_points << " hp left" << std::endl;
        }
    }
}

void    Claptrap::beRepaired(unsigned int amount) {
    if (this->_hit_points <= 0) {
        std::cout << "Claptrap " << this->_name << " can't repair beceause he is dead" << std::endl;
    }
    else if (this->_energy_points > 0) {
        std::cout << "Claptrap " << this->_name << " repaire " << 
            amount << " hp. " << this->_name << " have "  << this->_hit_points << std::endl;
        this->_hit_points += amount;
        this->_energy_points--;
    }
    else
        std::cout << "Claptrap " << this->_name << " don't have enought energy for repair" << std::endl;
}

Claptrap & Claptrap::operator=(Claptrap const & rhs) {
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return (*this);
}