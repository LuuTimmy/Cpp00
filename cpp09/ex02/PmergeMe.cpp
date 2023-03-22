#include "PmergeMe.hpp"

template <typename T>
void merge(T& container, typename T::iterator left, typename T::iterator middle, typename T::iterator right)
{
    T temp;
    typename T::iterator i = left, j = middle, k;

    while (i != middle && j != right) {
        if (*i < *j)
            temp.push_back(*i++);
        else
            temp.push_back(*j++);
    }
    while (i != middle)
        temp.push_back(*i++);

    while (j != right)
        temp.push_back(*j++);

    for (k = temp.begin(); k != temp.end(); ++k)
        *left++ = *k;
}

template <typename T>
void merge_sort(T& container, typename T::iterator left, typename T::iterator right)
{
    if (std::distance(left, right) > 1) {
        typename T::iterator middle = left;
        std::advance(middle, std::distance(left, right) / 2);

        merge_sort(container, left, middle);
        merge_sort(container, middle, right);

        merge(container, left, middle, right);
    }
}