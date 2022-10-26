#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>

int main() {
    int a;
    std::string str;

    while (1) {
        std::stringstream ss;
        std::getline(std::cin, str);
        ss << str;
        if ((ss >> a) && ss.rdbuf()->in_avail() == 0)
            std::cout << "prout" << std::endl;
    }
}