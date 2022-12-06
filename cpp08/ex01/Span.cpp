#include "Span.hpp"

Span::Span() {

}

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {

}

Span::~Span() {

}

void    Span::addNumber(int nb) {
    if (_vectorTab.size() >= _maxSize) {
        throw SizeExeption();
    }
    else {
        _vectorTab.push_back(nb);
    }
}

int Span::shortestSpan() {
    int res;

    if (_vectorTab.size() <= 1)
        throw SizeExeption();
    std::vector<int> temp = _vectorTab;
    std::sort(temp.begin(), temp.end());
    res = temp[1] - temp[0];
    for (std::vector<int>::iterator it = temp.begin(); it != temp.end() - 1; it++) {
        if (*(it + 1) - *it < res) {
            res = *(it + 1) - *it;
        }
    }
    return (res);
}

int Span::longestSpan() {
    if (_vectorTab.size() <= 1)
        throw SizeExeption();
    std::vector<int> temp = _vectorTab;
    std::sort(temp.begin(), temp.end());
    return (temp[temp.size() - 1] - temp[0]);
}

void    Span::vAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) + _vectorTab.size() > _maxSize)
        throw SizeExeption();
    _vectorTab.insert(_vectorTab.end(), begin, end);
}

Span::Span(Span const & src) : _maxSize(src._maxSize), _vectorTab(src._vectorTab) {

}

Span & Span::operator=(Span const & rhs) {
    _maxSize = rhs._maxSize;
    _vectorTab = rhs._vectorTab;
    return (*this); 
}