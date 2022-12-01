#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(std::string name, int gradeForSign, int gradeForExecute);
        ~Form();

        std::string getName() const;
        bool        getIsSign() const;
        int         getGradeForSign() const;
        int         getGradeForExecute() const;
        
        void        beSigned(Bureaucrat & bureaucrat);

        class GradeTooHightException : public std::exception
        {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };

        class AlreadySign : public std::exception
        {
            virtual const char *what() const throw();
        };

        Form(Form const & src);
        Form & operator=(Form const & rhs);
    private:
        const std::string   _name;
        bool                _isSign;
        const int           _gradeForSign;
        const int           _gradeForExecute;
};

std::ostream &  operator<<(std::ostream & o, Form const & rhs);

#endif 