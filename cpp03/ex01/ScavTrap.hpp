#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "Claptrap.hpp"

class ScavTrap : public Claptrap
{
    public:
        ScavTrap();
        ScavTrap(std::string);
        ~ScavTrap();

        void guardGate();
    private:
};

#endif