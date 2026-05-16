#include "../inc/WrongAnimal.hpp"
#include "../inc/animal.hpp"

WrongAnimal::WrongAnimal() : WrongAnimal("👾🐾WrongAnimal") {
    std::cout << _type << " has been created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string_view name) : _type(name) {
    std::cout << _type << " Parameterized constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
    std::cout << _type << " Copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << _type << " assignment operator called." << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << _type << " has been destroyed." << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "👾🐾WrongAnimal makes a sound." << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}