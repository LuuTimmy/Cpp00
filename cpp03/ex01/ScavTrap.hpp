#ifndef SCAPTRAP_HPP
#define SCAPTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(std::string name, int hp, int energy, int attackDamage);
        ~ScavTrap();

        void    attack(const std::string & target);
        void    guardGate();

        ScavTrap(ScavTrap const & src);
        ScavTrap &  operator=(ScavTrap const & rhs);
    private:
};

#endif