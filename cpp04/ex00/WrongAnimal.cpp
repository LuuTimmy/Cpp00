#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "Animal Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : _type(src._type) { 
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

std::string     WrongAnimal::getType() const{
    return (_type);
}

void    WrongAnimal::makeSound() const{
    std::cout << getType() << " bhouuuu" << std::endl;
}

WrongAnimal &  WrongAnimal::operator=(WrongAnimal const & src) {
    _type = src._type;
    return (*this);
}