#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) {
    _type = "WrongCat";
    *this = src;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

std::string     WrongCat::getType() const{
    return (_type);
}

void    WrongCat::makeSound() const {
    std::cout << _type << " Wrong miaouu" << std::endl;
}


WrongCat &  WrongCat::operator=(WrongCat const & src) {
    WrongAnimal::operator=(src);
    return (*this);
}