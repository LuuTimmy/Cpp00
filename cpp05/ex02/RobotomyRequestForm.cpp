#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    : Form("RobotomyRequestForm", 72, 45), _target("") {

}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) 
    : Form("RobotomyRequestFormForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) 
    : Form(src.getName(), src.getGradeForSign(), src.getGradeForExecute()), _target(src._target) {
    
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void    RobotomyRequestForm::executeChild(Bureaucrat const & executor) const {
    execute(executor);
    srand((unsigned) time(NULL));
    if (rand() % 2 == 0) {
        std::cout << _target << " has been Robotomy" << std::endl;
    }
    else {
        std::cout << "Robotomy has failed for " << _target << std::endl;
    }
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    _target = rhs._target;
    Form::operator=(rhs);
    return (*this);
}