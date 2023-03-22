#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    : Form("PresidentialPardonForm", 25, 5), _target("") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) 
    : Form("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) 
    : Form(src.getName(), src.getGradeForSign(), src.getGradeForExecute()), _target(src._target) {
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void    PresidentialPardonForm::executeChild(Bureaucrat const & executor) const{
    execute(executor);execute(executor);
    std::cout << _target << " was pardonned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    _target = rhs._target;
    Form::operator=(rhs);
    return (*this);
}