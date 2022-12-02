#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src) {
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

std::string     Dog::getType() const {
    return (_type);
}

void    Dog::makeSound() const {
    std::cout << getType() << " waafffff" << std::endl;
}



Dog &  Dog::operator=(Dog const & src) {
    Animal::operator=(src);
    return (*this);
}