#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Construtor" << std::endl;
}

Brain::Brain(Brain const & src) {
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

Brain & Brain::operator=(Brain const & src) {
    for(int i = 0; i < sizeof(ideas) / sizeof(ideas[0]); i++) {
        ideas[i] = src.ideas[i];
    }
    return(*this);
}