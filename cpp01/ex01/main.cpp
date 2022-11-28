#include "Zombie.hpp"

int main() {
    int nb = 5;
    Zombie *zomb;

    zomb = zombieHorde(5, "richard");
    for (int i = 0; i < nb; i++) {
        std::cout << (i + 1) << " ";
        zomb[i].announce();
    }
    delete[] zomb;
}