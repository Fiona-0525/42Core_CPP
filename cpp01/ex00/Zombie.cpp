#include "Zombie.hpp"

Zombie::Zombie(std::string_view name) : _name(name) {
} //Initializer List 

Zombie::~Zombie(void)
{
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
 