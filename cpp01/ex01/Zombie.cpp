#include "Zombie.hpp"

Zombie::Zombie(): name("") {}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}
