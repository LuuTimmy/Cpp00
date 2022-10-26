#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>

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