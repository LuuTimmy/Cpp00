#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    int array = 10;

    Animal *array_animals[array];
    for(int i = 0; i < array; i++) {
        if (i <= array / 2)
            array_animals[i] = new Dog();
        else
            array_animals[i] = new Cat();
    }
    for(int i = 0; i < array; i++) {
        delete array_animals[i];
    }
}