#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string str);
        ClapTrap(std::string str, int hp, int energy, int attackDamage);
        ~ClapTrap();

        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        ClapTrap(ClapTrap const & src);
        ClapTrap &  operator=(ClapTrap const & rhs);

    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
};

#endif