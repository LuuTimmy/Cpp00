#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat test1("bob", 151);
        std::cout << test1 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test1("bob", 0);
        std::cout << test1 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test2("bobi", 15);
        std::cout << test2 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test2("bobi", 15);
        test2.relegationGrade(100);
        test2.relegationGrade(35);
        test2.augmentationgrade(149);
        test2.relegationGrade(150);
        std::cout << test2 << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}