#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <algorithm>
#include <iostream>
#include <ctype.h>
#include <sstream>

#include "contact.hpp"

class Phonebook
{
    public:
        void	add_contact();
        void    print_info(std::string str);
        void    display();

    private:
	    int     olders;
        Contact contactnb[8];
};

#endif