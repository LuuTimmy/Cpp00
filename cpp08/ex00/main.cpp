#include "easyfind.hpp"

int main() {
    int nb = 10;
    std::vector<int>            vect;
    std::vector<int>            vect2;
    std::vector<int>            vect3;
    std::vector<int>::iterator  it;

    for (int i = 0; i < nb; i++) {
        vect.push_back(i);
        vect2.push_back(i * 3);
        vect3.push_back(50 + i);
    }
    it = easyfind(vect, 5);
    if (it != vect.end()) {
        std::cout << "Number : " << *it << std::endl;
    }
    else {
        std::cout << "Not this number in the containeur" << std::endl;
    }
    it = easyfind(vect2, 5);
    if (it != vect2.end()) {
        std::cout << "Number : " << *it << std::endl;
    }
    else {
        std::cout << "Not this number in the containeur" << std::endl;
    }
    it = easyfind(vect2, 9);
    if (it != vect2.end()) {
        std::cout << "Number : " << *it << std::endl;
    }
    else {
        std::cout << "Not this number in the containeur" << std::endl;
    }
    it = easyfind(vect3, 59);
    if (it != vect3.end()) {
        std::cout << "Number: " << *it << std::endl;
    }
    else {
        std::cout << "Not this number in the containeur" << std::endl;
    }
}
