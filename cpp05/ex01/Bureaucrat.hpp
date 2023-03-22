#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        std::string getName() const;
        int         getGrade() const;

        void        relegationGrade(int nb);
        void        augmentationgrade(int nb);

        void        signForm(Form & form);

        class GradeTooHightException : public std::exception
        {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };

        Bureaucrat(Bureaucrat const & src);
        Bureaucrat & operator=(Bureaucrat const & rhs);
    private:
        const       std::string _name;
        int         _grade;
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif 