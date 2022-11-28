#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("[]"), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << this->_name << " default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << this->_name << " constructor" << std::endl;    
}

ClapTrap::ClapTrap(std::string str, int hp, int energy, int attackDamage) : 
    _name(str), _hit_points(hp), _energy_points(energy), _attack_damage(attackDamage) {
        
    std::cout << "ClapTrap " << this->_name << " constructor" << std::endl;    
}

ClapTrap::ClapTrap(ClapTrap const & src) : 
    _name(src._name), 
    _hit_points(src._hit_points), 
    _energy_points(src._energy_points), 
    _attack_damage(src._attack_damage) {
    
    *this = src;
    return ;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " destructor" << std::endl;
}

void    ClapTrap::attack(const std::string & target) {
    if (this->_hit_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " can't attack beceause he is dead" << std::endl;
    }
    else if (this->_energy_points > 0) {
        std::cout << "ClapTrap " << this->_name << " attack "  << 
            target << " causing " << _attack_damage << " points of damage" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->_name << " don't have enought energy for attack" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit_points <= 0)
        std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
    else {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " damage" << std::endl;
        this->_hit_points -= amount;
        if (this->_hit_points <= 0) {
            this->_hit_points = 0;
            std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        }
        else {
            std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hp left" << std::endl;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " can't repair beceause he is dead" << std::endl;
    }
    else if (this->_energy_points > 0) {
        std::cout << "ClapTrap " << this->_name << " repaire " << 
            amount << " hp. " << this->_name << " have "  << this->_hit_points << std::endl;
        this->_hit_points += amount;
        this->_energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->_name << " don't have enought energy for repair" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return (*this);
}