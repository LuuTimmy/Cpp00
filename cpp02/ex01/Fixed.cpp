#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int nb) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(nb << this->const_static_value);
}

Fixed::Fixed(const float nb) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(nb * (1 << this->const_static_value));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const newValue) {
    this->value = newValue;
    return ;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        setRawBits(rhs.getRawBits());
    return (*this);
}

float   Fixed::toFloat(void) const {
    float f = (float)this->value / (float)(1 << this->const_static_value);
    return(f);
}

int     Fixed::toInt(void) const {
    return (this->value >> this->const_static_value);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return (o);
}