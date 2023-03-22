#include <vector>
#include <list>
#include <chrono>
#include <iostream>
#include <algorithm>

#include <vector>
#include <list>

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

int main()
{
    std::vector<int> v = { 5, 2, 9, 1, 5, 6, 8 };
    std::list<int> l = { 4, 1, 9, 3, 5 };

    std::cout << "Vecteur avant le tri par fusion : ";
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Liste avant le tri par fusion : ";
    for (std::list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    merge_sort(v, v.begin(), v.end());
    merge_sort(l, l.begin(), l.end());

    std::cout << "Vecteur après le tri par fusion : ";
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Liste après le tri par fusion : ";
    for (std::list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}