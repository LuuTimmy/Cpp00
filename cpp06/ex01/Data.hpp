#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
    public:
        Data();
        Data(std::string name, int age);
        ~Data();

        void    printValues();

        Data(Data const & src);
        Data & operator=(Data const & rhs);
    private:
        std::string _name;
        int _age;
};

#endif