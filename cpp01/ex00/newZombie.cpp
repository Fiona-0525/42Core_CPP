#include "Zombie.hpp"

Zombie* newZombie( std::string_view name )
{
	Zombie* new_zombie = new Zombie(name); // created a heap-allocated Zombie
	return (new_zombie);
}
