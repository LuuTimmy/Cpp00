#include "Form.hpp"

Form::Form() : _name(""), _isSign(false), _gradeForSign(150), _gradeForExecute(150) {
    if (_gradeForSign < 1 || _gradeForExecute < 1)
        throw GradeTooHightException();
    else if (_gradeForSign > 150 || _gradeForExecute > 150)
        throw GradeTooLowException();
}

Form::Form(std::string name, int gradeForSign, int gradeForExecute) : 
    _name(name), _isSign(false), _gradeForSign(gradeForSign), _gradeForExecute(gradeForExecute) {

    if (_gradeForSign < 1 || _gradeForExecute < 1)
        throw GradeTooHightException();
    else if (_gradeForSign > 150 || _gradeForExecute > 150)
        throw GradeTooLowException();
}

Form::Form(Form const & src) : 
    _name(src._name), _isSign(src._isSign), _gradeForSign(src._gradeForSign), _gradeForExecute(src._gradeForExecute) {
    
    *this = src;
}

Form::~Form() {

}

//------------------------------------------------


std::string     Form::getName() const {
    return (_name);
}

bool    Form::getIsSign() const {
    return (_isSign);
}

int     Form::getGradeForSign() const {
    return (_gradeForSign);
}

int     Form::getGradeForExecute() const {
    return (_gradeForExecute);
}


//------------------------------------------------

void    Form::execute(Bureaucrat const & executor) const {
    if (!_isSign)
        throw ExecutionSign();
    if (_gradeForExecute < executor.getGrade())
        throw GradeTooLowException();
}

void    Form::beSigned(Bureaucrat & bureaucrat) {
    if (_isSign == true)
        throw AlreadySign();
    else if (bureaucrat.getGrade() <= _gradeForSign) {
        _isSign = true;
    }
    else {
        throw GradeTooLowException();
    }
}

const char     *Form::AlreadySign::what() const throw() {
    return ("form is already signed");
}

const char     *Form::GradeTooLowException::what() const throw() {
    return ("form grade too slow");
}

const char    *Form::GradeTooHightException::what() const throw() {
    return ("form grade too hight");
}

const char     *Form::ExecutionSign::what() const throw() {
    return ("form is not sign");
}

Form & Form::operator=(Form const & rhs) {
    _isSign = rhs._isSign;
    return (*this);
}

std::ostream &  operator<<(std::ostream & o, Form const & rhs) {
    o   << "Form name: "<<rhs.getName() << ", is signed : " << rhs.getIsSign() 
        << ", level to sign: " << rhs.getGradeForSign() << ", level to execute " << rhs.getGradeForExecute() << std::endl;
    return (o);
}