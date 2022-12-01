#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat bigboss("bigboss", 1);
    Bureaucrat normalGuys("normalguys", 75);
    Bureaucrat normalGuys2("normalguys2", 45);
    Bureaucrat lastboss("lastboss", 150);

    try {
        Form *form1 = new PresidentialPardonForm("jean-luc");
        form1->beSigned(bigboss);
        form1->executeChild(bigboss);
        form1->executeChild(normalGuys);
        delete form1;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------" << std::endl;
    try {
        Form *form2 = new RobotomyRequestForm("jean-lucos");
        form2->beSigned(bigboss);
        form2->executeChild(normalGuys2);
        form2->executeChild(lastboss);
        delete form2;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------" << std::endl;
    try {
        Form *form3 = new ShrubberyCreationForm("jean-lucosi");
        form3->beSigned(bigboss);
        form3->executeChild(normalGuys2);
        form3->executeChild(lastboss);
        delete form3;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "======================================" << std::endl;

    try {
        PresidentialPardonForm president("president");
        lastboss.executeForm(president);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        PresidentialPardonForm president("president");
        bigboss.signForm(president);
        bigboss.executeForm(president);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}