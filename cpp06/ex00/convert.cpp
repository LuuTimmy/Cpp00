#include "convert.hpp"

Convert::Convert() : _str(0) {

}

Convert::Convert(std::string str) : _str(str) {
}

Convert::Convert(Convert const & src) : _str(src._str) {
}

Convert::~Convert() {

}

void    Convert::transformAll() {
    toChar();
    toInt();
    toFloat();
    toDouble();
}

void    Convert::toChar() {
    std::cout << "char : ";
    try {
        char c = static_cast<int>(std::stoi(_str));
        if (c < 32 || c > 127)
            std::cout << "No displayble" << std::endl;
        else
            std::cout << c << std::endl;
    }
    catch (const std::invalid_argument & e) {
        std::cout << "impossible" << std::endl;
    }
    catch(const std::out_of_range & e) {
        std::cout << "out of range" << std::endl;
    }
}

void    Convert::toInt() {
    std::cout << "int : ";
    try {
        int c = static_cast<int>(std::stoi(_str));
        std::cout << c << std::endl;
    }
    catch (const std::invalid_argument & e) {
        std::cout << "impossible" << std::endl;
    }
    catch(const std::out_of_range & e) {
        std::cout << "out of range" << std::endl;
    }
}

void    Convert::toFloat() {
    std::cout << "float : ";
    try {
        float c = static_cast<float>(std::stof(_str));
        std::cout << c << "f" << std::endl;
    }
    catch (const std::invalid_argument & e) {
        std::cout << "impossible" << std::endl;
    }
    catch(const std::out_of_range & e) {
        std::cout << "out of range" << std::endl;
    }
}

void    Convert::toDouble() {
    std::cout << "double : ";
    try {
        float c = static_cast<double>(std::stod(_str));
        std::cout << c  <<std::endl;
    }
    catch (const std::invalid_argument & e) {
        std::cout << "impossible" << std::endl;
    }
    catch(const std::out_of_range & e) {
        std::cout << "out of range" << std::endl;
    }
}

Convert & Convert::operator=(Convert const & rhs) {
    _str = rhs._str;
    return (*this);
}