#include "Zombie.hpp"

// Zombie::Zombie(): name("") {}

// Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string_view n) {
    _name = n;
}
