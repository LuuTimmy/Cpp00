#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src), _brain(new Brain(*src._brain)) {
}

Dog::~Dog() {
    delete(_brain);
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