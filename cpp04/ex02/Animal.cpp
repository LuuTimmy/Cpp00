#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal Default constructor" << std::endl;
}

Animal::Animal(Animal const & src) : _type("Animal") { 
    *this = src;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

std::string     Animal::getType() const{
    return (_type);
}

void    Animal::makeSound() const{
    std::cout << _type << " bhouuuu" << std::endl;
}

Animal &  Animal::operator=(Animal const & src) {
    _type = src._type;
    return (*this);
}


