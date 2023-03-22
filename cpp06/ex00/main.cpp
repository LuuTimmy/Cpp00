#include "convert.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "wrong number of argument" << std::endl;
        return (1);
    }
    Convert convert(argv[1]);
    convert.transformAll();
    return (0);
}

