#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    public:
        Array() :  _size(0), _tab(0) {};
        Array(unsigned int size) : _size(size), _tab(new T[size]) {};
        Array(Array const & src) : _size(src._size), _tab(new T[src._size]) {
            for (unsigned int i = 0; i < _size; i++) {
                _tab[i] = src._tab[i];
            };
        };
        ~Array() {
            delete[] _tab;
        };

        unsigned int    size() const {
            return (_size);
        }

        Array & operator=(Array const & rhs) {
            _size = rhs._size;
            _tab = new T[rhs._size];
            for (unsigned int i = 0; i < _size; i++) {
                _tab[i] = rhs._tab[i];
            };
            return (*this);
        };

        T & operator[](unsigned int i) {
            if (i >= _size)
                throw InvalidIndexException();
            return (_tab[i]);
        }

        class InvalidIndexException : public std::exception
        {
            virtual const char *what() const throw() {
                return ("Invalid Index");
            }
        };

    private:
        unsigned int    _size;
        T               *_tab;

};

#endif