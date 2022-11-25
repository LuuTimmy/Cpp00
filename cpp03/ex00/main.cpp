#include "ClapTrap.hpp"

int main() { //constructeur vide ?
    ClapTrap koala;
    ClapTrap ClapTrap1("bibou");
    ClapTrap ClapTrap2("pamplemousse");

    koala.attack("girafe");
    ClapTrap1.attack("pamplemousse");
    ClapTrap1.takeDamage(8);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.beRepaired(50);
    ClapTrap1.attack("pamplemousse");
}