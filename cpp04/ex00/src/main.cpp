#include "../inc/animal.hpp"
#include "../inc/cat.hpp"
#include "../inc/dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
int main()
{
std::cout << "-------Testing Animal------" << std::endl;
const Animal* meta = new Animal();

std::cout << "\n-------Testing Dog-------" << std::endl;
const Animal* new_dog = new Dog();
Dog dog1;
Dog dog2 = dog1;
Dog dog3;
dog3 = dog1;

std::cout << "\n-------Testing Cat-------" << std::endl;
const Animal* catj = new Cat();
catj->makeSound();

std::cout << "\n-------Testing gettype-------" << std::endl;
std::cout << meta->getType() << " " << std::endl;
std::cout << catj->getType() << " " << std::endl;

std::cout << "\n-------Testing makeSound------" << std::endl;
Animal* animals[] = {new Dog(), new Cat()};
for (int i = 0; i < 2; ++i) {
    std::cout << "---Animal " << i + 1 << "---" << std::endl;
    animals[i]->makeSound();
    delete animals[i];
}

std::cout << "\n-----Testing WrongAnimal && WrongCat-------" << std::endl;
const WrongAnimal* wrongAnimal = new WrongAnimal();
const WrongAnimal* wrongCat = new WrongCat();
wrongAnimal->makeSound();
wrongCat->makeSound();

std::cout << "\n-------Deleting WrongAnimal------" << std::endl;
delete wrongAnimal;
delete wrongCat;

std::cout << "\n-------Deleting Heap Objects-------" << std::endl;
delete meta;
delete new_dog;
delete catj;

std::cout << "\n====Stack Objects Destroyed Automatically======" << std::endl;
return 0;
}
