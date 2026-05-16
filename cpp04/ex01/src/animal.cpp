#include "../inc/animal.hpp"

Animal::Animal() : Animal("🐾Animal") {
    std::cout << _type << " has been created." << std::endl;
}

Animal::Animal(std::string_view name) : _type(name) {
    std::cout << _type << " Parameterized constructor called." << std::endl;
}
    
Animal::Animal(const Animal &other) : _type(other._type) {
    this->_type = other._type;
    std::cout << _type << " copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout << _type << " assignment operator called." << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << _type << " has been destroyed." << std::endl;
}

void Animal::makeSound() const {
    std::cout << "🐾Animal makes a sound." << std::endl;
}

std::string Animal::getType() const {
    return _type;
}
