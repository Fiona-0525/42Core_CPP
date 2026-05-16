#include "../inc/cat.hpp"
#include "../inc/animal.hpp"

Cat :: Cat () : Animal("🐱Cat") {
    std::cout << _type << " has been created." << std::endl;
}

Cat::Cat(std::string_view name) : Animal(name) {
    std::cout << _type << " Parameterized constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    this->_type = other._type;
    std::cout << _type << " copy constructor called." << std::endl;
}

Cat& Cat :: operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << _type << " assignment operator called." << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << _type << " has been destroyed." << std::endl;
}

void Cat::makeSound() const {
    std::cout << _type << " says:  Meow!" << std::endl;
}

std::string Cat::getType() const {
    return _type;
}
