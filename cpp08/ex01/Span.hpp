#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class   Span
{
    public:
        Span(unsigned int maxSize);
        virtual ~Span();

        void    addNumber(int nb);
        int     shortestSpan();
        int     longestSpan();

        void    vAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

        Span(Span const & src);
        Span & operator=(Span const & rhs);

        class SizeExeption : public std::exception
        {
            const char *what() const throw() {
                return ("Size Error");
            }
        };
    private:
        Span();
        unsigned int        _maxSize;
        std::vector<int>    _vectorTab;


};

#endif