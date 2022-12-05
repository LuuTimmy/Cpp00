#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T, typename I>
void    iter(T *tab, I tab_size, void (*f)(T const & )) {
    for (I i = 0; i < tab_size; i++) {
        (*f)(tab[i]);
    }
}

template<typename T>
void    display(T &d) {
    std::cout << d << std::endl;
} 

#endif