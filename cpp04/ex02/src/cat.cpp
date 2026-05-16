#include "../inc/cat.hpp"
#include "../inc/animal.hpp"
#include "../inc/brain.hpp"

Cat :: Cat () : Animal("🐱Cat") {
    _brain = new Brain("🐱Cat");
    std::cout << _type << " has been created." << std::endl;
}

Cat::Cat(std::string_view name) : Animal(name) {
    _brain = new Brain("🐱Cat");
    std::cout << _type << " Parameterized constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    _brain = new Brain(*other._brain);
    std::cout << _type << " Copy constructor called." << std::endl;
}

Cat& Cat :: operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    std::cout << _type << " assignment operator called." << std::endl;
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << _type << " has been destroyed." << std::endl;
}

void Cat::makeSound() const {
    std::cout << _type << " says: Meow!" << std::endl;
}

std::string Cat::getType() const {
    return _type;
}
