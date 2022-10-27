#include <iostream>

int main() {
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory adress string variable: " << &str << std::endl;
    std::cout << "memory adress stringPTR: " << &stringPTR << std::endl;
    std::cout << "memory adress stringREF: " << &stringREF << std::endl;

    std::cout << "value string variable: " << str << std::endl;
    std::cout << "value pointed stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed stringREF: " << stringREF << std::endl;
}