#include "Data.hpp"

Data::Data() : _name("Bob"), _age(45) {

}

Data::Data(std::string name, int age) : _name(name), _age(age) {

}

Data::Data(Data const & src) : _name(src._name), _age(src._age) {

}

Data::~Data() {

}

void    Data::printValues() {
    std::cout << "name: " << _name << ", age: " << _age << std::endl;
}

Data & Data::operator=(Data const & rhs) {
    _name = rhs._name;
    _age = rhs._age;
    return (*this);
}