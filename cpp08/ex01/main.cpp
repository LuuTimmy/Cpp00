#include "Span.hpp"
#include <stdlib.h>
#include <time.h>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "------------------------------------" << std::endl;
    srand (time(NULL));
    try {
    Span sp2 = Span(10000);
        for (int i = 0; i < 10000; i++) {
            sp2.addNumber(rand() % 1000000);
        }
        sp2.addNumber(rand() % 1000000);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try {
        Span sp3 = Span(10000);
        for (int i = 0; i < 10000; i++) {
            sp3.addNumber(rand());
        }
        std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp3.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    try {
        Span sp4 = Span(10);
        std::vector<int> array;

        for (int i = 0; i < 10; i++) {
            array.push_back(rand() % 10000);
        }

        sp4.vAddNumber(array.begin(), array.end());
        std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp4.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}