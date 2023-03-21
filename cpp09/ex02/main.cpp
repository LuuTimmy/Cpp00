#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <cstdlib>
#include <vector>
#include <list>
#include <ctime>

template<typename T>
void displayContainer(const T& container) {
    for (typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

//make me other mergesort


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
    mergeInsertSort(nbList.begin(), nbList.end());
    clock_t endTime1 = clock();
    double elapsedTime1 = double(endTime1 - beginTime1) / CLOCKS_PER_SEC;
}