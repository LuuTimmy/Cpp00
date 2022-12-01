#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Form        Ftest1("form1", 4, 50);
        std::cout << Ftest1 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try {
        Form        Ftest2("form1", 5, 1110);
        std::cout << Ftest2 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try {
        Form        Ftest3("form1", 0, 1);
        std::cout << Ftest3 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try {
        Form        Ftest4("form1", 70, 50);
        Bureaucrat  richard("bobi", 60);

        Ftest4.beSigned(richard);
        std::cout << Ftest4 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try {
        Form        Ftest5("form1", 70, 50);
        Bureaucrat  jean("bobi", 60);

        jean.signForm(Ftest5);
        std::cout << Ftest5 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try {
        Form        Ftest5("form1", 70, 50);
        Bureaucrat  jean("bobi", 150);

        jean.signForm(Ftest5);
        std::cout << Ftest5 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    try {
        Form        Ftest5("form1", 150, 50);
        Bureaucrat  jean("bobi", 150);

        jean.signForm(Ftest5);
        jean.signForm(Ftest5);
        std::cout << Ftest5 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}