#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
    public:
        Dog();
        ~Dog();

        std::string     getType() const ;
        void            makeSound() const ;

        Dog(Dog const & src);
        Dog &  operator=(Dog const & rhs);
    private:
        Brain *_brain;
};

#endif