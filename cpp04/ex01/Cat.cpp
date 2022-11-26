#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat Default constructor" << std::endl;
}

Cat::Cat(Cat const & src) {
    _type = "Cat";
    _brain = new Brain();
    *this = src;
}

Cat::~Cat() {
    //delete(_brain);
    std::cout << "Cat destructor" << std::endl;
}

std::string     Cat::getType() const{
    return (_type);
}

void    Cat::makeSound() const {
    std::cout << _type << " miaouu" << std::endl;
}


Cat &  Cat::operator=(Cat const & src) {
    Animal::operator=(src);
    return (*this);
}