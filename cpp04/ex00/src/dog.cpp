#include "../inc/dog.hpp"
#include "../inc/animal.hpp"

Dog::Dog() : Animal("🐶Dog") {
    std::cout << _type << " has been created." << std::endl;
}

Dog::Dog(std::string_view name) : Animal(name) {
    std::cout << _type << " Parameterized constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    this->_type = other._type;
    std::cout << _type << " Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << _type << " assignment operator called." << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << _type << " has been destroyed." << std::endl;
}

void Dog::makeSound() const {
    std::cout << _type << " says:  Woof!" << std::endl;
}

std::string Dog::getType() const {
    return _type;
}
