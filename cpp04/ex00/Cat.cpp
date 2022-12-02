#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat Default constructor" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src) {

}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

std::string     Cat::getType() const{
    return (_type);
}

void    Cat::makeSound() const {
    std::cout << getType() << " miaouu" << std::endl;
}


Cat &  Cat::operator=(Cat const & src) {
    Animal::operator=(src);
    return (*this);
}