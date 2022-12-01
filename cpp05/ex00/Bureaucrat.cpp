#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150) {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw GradeTooHightException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {
    *this = src;
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
    return (_name);
}

int         Bureaucrat::getGrade() const {
    return (_grade);
}

void        Bureaucrat::relegationGrade(int nb) {
    if (_grade + nb > 150)
            throw GradeTooLowException();
    _grade += nb;
}

void        Bureaucrat::augmentationgrade(int nb) {
    if (_grade - nb < 1)
            throw GradeTooHightException();
    _grade -= nb;
}

const char     *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("grade too slow");
}

const char    *Bureaucrat::GradeTooHightException::what() const throw() {
    return ("grade too hight");
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    _grade = rhs._grade;
    return (*this);
}

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (o);
}