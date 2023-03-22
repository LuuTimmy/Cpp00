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

template<typename T>
void displayContainer(const T& container) {
    for (typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Error: Argument" << std::endl;
        return 1;
    }
    std::vector<int> sequence;
    for(int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num <= 0) {
            std::cout << "Error: operand " << num << " is out of range" << std::endl;
            return 1;
        }
        sequence.push_back(num);
    }
    std::cout << "Before: ";
    displayContainer(sequence);

    std::list<int> nbList(sequence.begin(), sequence.end());
    clock_t beginTime1 = clock();
    merge_sort(nbList, nbList.begin(), nbList.end());
    clock_t endTime1 = clock();
    double elapsedTime1 = double(endTime1 - beginTime1) / CLOCKS_PER_SEC * 1000000;
    
    std::vector<int> nbVector(sequence.begin(), sequence.end());
    clock_t beginTime2 = clock();
    merge_sort(nbVector, nbVector.begin(), nbVector.end());
    clock_t endTime2 = clock();
    double elapsedTime2 = double(endTime2 - beginTime2) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After: ";
    for (std::list<int>::const_iterator it = nbList.begin(); it != nbList.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << sequence.size() << " elements with std::list : " << elapsedTime1 << " us" << std::endl;
    std::cout << "Time to process a range of " << sequence.size() << " elements with std::vector : " << elapsedTime2 << " us" << std::endl;
}