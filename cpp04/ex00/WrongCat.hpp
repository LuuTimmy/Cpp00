#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();

        std::string     getType() const;
        void            makeSound() const;

        WrongCat(WrongCat const & src);
        WrongCat &  operator=(WrongCat const & rhs);
};

#endif