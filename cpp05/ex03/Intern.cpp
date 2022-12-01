#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern::~Intern() {
}

Form    *Intern::makeForm(std::string const & name, std::string const & target) const {
    int nb = -1;
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidental pardon"};

    for (std::size_t i = 0; i < sizeof(forms) / sizeof(std::string); i++) {
        if (forms[i] == name) {
            std::cout << "Intern creates " << forms[i] << std::endl;
            nb = i;
            break ;
        }
    }
    switch (nb) {
    case 0:
        return (new ShrubberyCreationForm(target));
    case 1:
        return (new RobotomyRequestForm(target));
    case 2:
		return (new PresidentialPardonForm(target));
    default:
        std::cout << "Error: Form Not Found" << std::endl;
    }
    return (0);
}

Intern &    Intern::operator=(Intern const & rhs) {
    if (this != &rhs)
        return (*this);
    return (*this);
}