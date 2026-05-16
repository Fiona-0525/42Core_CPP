#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("👾🐱WrongCat") {
    std::cout << _type << " has been created." << std::endl;
}

WrongCat::WrongCat(std::string_view name) : WrongAnimal(name) {
    std::cout << _type << " Parameterized constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << _type << " Copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << _type << " assignment operator called." << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << _type << " has been destroyed." << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << _type << " says: Meow!" << std::endl;
}
