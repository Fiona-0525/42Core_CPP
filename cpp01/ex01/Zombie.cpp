#include "Zombie.hpp"

Zombie::Zombie(){
    _name = ""; // redundant for std::string
}

Zombie::Zombie(const std::string_view  name){
    _name = name;
}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string_view n) {
    _name = n;
}
