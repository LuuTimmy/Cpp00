#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(std::string name, int hp, int energy, int attackDamage);
        ~FragTrap();

        void    highFivesGuys(void);
        void    attack(const std::string & target);

        FragTrap(FragTrap const & src);
        FragTrap &  operator=(FragTrap const & rhs);
    private:
};

#endif