#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout <<_name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ":BzzzZ......." << std::endl;
}
