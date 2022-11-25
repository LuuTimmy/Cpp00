#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(Dog const & src) {
    _type = "Dog";
    *this = src;
}

Dog::~Dog() {
    //delete(_brain);
    std::cout << "Dog destructor" << std::endl;
}

std::string     Dog::getType() const {
    return (_type);
}

void    Dog::makeSound() const {
    std::cout << _type << " waafffff" << std::endl;
}



Dog &  Dog::operator=(Dog const & src) {
    Animal::operator=(src);
    return (*this);
}