#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator    easyfind(T & container, int findNb) {
    typename T::iterator it = std::find(container.begin(), container.end(), findNb);
    if (it != container.end())
        return (it);
    else {
        return (container.end());
    }
}

#endif