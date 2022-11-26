#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        ~WrongAnimal();

        std::string     getType() const;
        void            makeSound() const;

        WrongAnimal(WrongAnimal const & src);
        WrongAnimal &  operator=(WrongAnimal const & rhs);
    protected:
        std::string _type;
};

#endif