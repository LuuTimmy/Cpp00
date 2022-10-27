#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <ctype.h>
#include <sstream>

class Zombie 
{
    public:
        ~Zombie();
        void    announce(void);
        void    setName(std::string name);
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif