#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
    int num = rand() % 3;
    if (num == 0) {
        std::cout << "generate A" << std::endl;
        return (new A);
    }
    else if (num == 1) {
        std::cout << "generate B" << std::endl;
        return (new B);
    }
    else {
        std::cout << "generate C" << std::endl;
        return (new C);
    }
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "type error" << std::endl;
}

void identify(Base& p) {
    try {
        (void) dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch(std::bad_cast &bc) {}
    try {
        (void) dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch(std::bad_cast &bc) {}
    try {
        (void) dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch(std::bad_cast &bc) {}
    std::cout << "type errro" << std::endl;
}

int main ()
{
	srand(time(NULL));


  	Base* ptr = generate();
	Base* tmp = generate();
	Base & ref = *tmp;
    
	identify(ptr);
	identify(ref);

	delete ptr;
	delete tmp;
}