#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
    public:
        Cat();
        ~Cat();

        std::string     getType() const;
        void            makeSound() const;

        Cat(Cat const & src);
        Cat &  operator=(Cat const & rhs);
    private:
        Brain *_brain;
};

#endif