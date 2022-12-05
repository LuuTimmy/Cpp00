#include "Data.hpp"

uintptr_t   serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main() {
    Data data("plouf", 35);

    uintptr_t test = serialize(&data);

    Data *data2 = deserialize(test);

    std::cout << "Address 1: " << &data << std::endl;
    std::cout << "Address 2: " << data2 << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "Data value 1 "; 
    data.printValues();
    std::cout << "Data value 2 "; 
    data2->printValues();
}

