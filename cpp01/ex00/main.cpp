#include "Zombie.hpp"

int main() {
    Zombie *zomb;

    zomb = newZombie("richard");
    zomb->announce();
    randomChump("Gerard");
    delete(zomb);
}