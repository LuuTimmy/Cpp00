#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        virtual ~Animal();

        std::string     getType() const;
        virtual void            makeSound() const;

        Animal(Animal const & src);
        Animal &  operator=(Animal const & rhs);
    protected:
        std::string _type;
};

#endif