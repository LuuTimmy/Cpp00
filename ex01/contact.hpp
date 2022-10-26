#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>

class Contact
{
    public:
        std::string verifIsEmpty(std::string name);
        void        add_info();
        void        printAll();

    private:
	    std::string	first_name;
	    std::string	last_name;
	    std::string	nickname;
	    std::string	phone_number;
	    std::string	darknest_secret;
};

#endif