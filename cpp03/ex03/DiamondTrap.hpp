#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(std::string name, int hp, int energy, int attackDamage);
        ~DiamondTrap();

        void    whoAmI();
        void    attack(const std::string & target);

        DiamondTrap(DiamondTrap const & src);
        DiamondTrap &  operator=(DiamondTrap const & rhs);
    private:
        std::string _name;
};      

#endif