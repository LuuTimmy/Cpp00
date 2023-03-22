#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();

        Form *makeForm(std::string const & name, std::string const & target) const;

        Intern(Intern const & src);
        Intern & operator=(Intern const & rhs);
    private:
};

#endif