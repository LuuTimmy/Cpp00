#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
    public:
        Cat();
        ~Cat();

        std::string     getType() const;
        void            makeSound() const;

        Cat(Cat const & src);
        Cat &  operator=(Cat const & rhs);
};

#endif