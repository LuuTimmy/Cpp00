#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>

class Convert
{
    public:
        Convert(std::string str);
        ~Convert();

        void    transformAll();
        void    toChar();
        void    toInt();
        void    toFloat();
        void    toDouble();

        Convert(Convert const & src);
        Convert & operator=(Convert const & rhs);
    private:
        Convert();
        std::string _str;
};

#endif