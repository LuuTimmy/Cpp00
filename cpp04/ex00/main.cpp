#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

const WrongAnimal* w_meta = new WrongAnimal();
const WrongAnimal* w_i = new WrongCat();
std::cout << w_i->getType() << " " << std::endl;
w_i->makeSound(); //will output the cat sound!
w_meta->makeSound();

delete(meta);
delete(j);
delete(i);
delete(w_meta);
delete(w_i);
return 0;
}