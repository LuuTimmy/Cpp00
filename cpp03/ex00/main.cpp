#include "Claptrap.hpp"

int main() { //constructeur vide ?
    Claptrap koala;
    Claptrap claptrap1("bibou");
    Claptrap claptrap2("pamplemousse");

    koala.attack("girafe");
    claptrap1.attack("pamplemousse");
    claptrap1.takeDamage(8);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.beRepaired(50);
    claptrap1.attack("pamplemousse");
}