#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
    public:
        Dog();
        virtual ~Dog();

        std::string     getType() const ;
        void            makeSound() const ;

        Dog(Dog const & src);
        Dog &  operator=(Dog const & rhs);
};

#endif