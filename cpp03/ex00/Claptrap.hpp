#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class Claptrap
{
    public:
        Claptrap();
        Claptrap(std::string str);
        ~Claptrap();

        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        Claptrap(Claptrap const & src);
        Claptrap &  operator=(Claptrap const & rhs);

    private:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
};

#endif