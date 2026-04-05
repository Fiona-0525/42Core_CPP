#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* new_zombie = new Zombie();
	new_zombie->setName(name, "heap");
	return (new_zombie);
}
