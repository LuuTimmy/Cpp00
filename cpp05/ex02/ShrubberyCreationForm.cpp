#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
    : Form("ShrubberyCreationForm", 145, 137), _target("") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) 
    : Form("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) 
    : Form(src.getName(), src.getGradeForSign(), src.getGradeForExecute()), _target(src._target){
    
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void    ShrubberyCreationForm::executeChild(Bureaucrat const & executor) const {
    execute(executor);
    std::ofstream file;
    file.open((_target + "_shrubbery").c_str());
    if (!file)
        throw ExecutionSign();
    file << "       _-_          " << std::endl;
    file << "    /~~   ~~\\       " << std::endl;
    file << " /~~         ~~\\    " << std::endl;
    file << "{               }   " << std::endl;
    file << " \\  _-     -_  /    " << std::endl;
    file << "   ~  \\ //  ~      " << std::endl;
    file << "_- -   | | _- _     " << std::endl;
    file << "  _ -  | |   -_     " << std::endl;
    file << "      // \\;        " << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    _target = rhs._target;
    Form::operator=(rhs);
    return (*this);
}