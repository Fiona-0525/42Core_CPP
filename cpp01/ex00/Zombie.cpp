#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string n)
{
	name = n;
}
