#include "Zombie.hpp"

int main()
{
	Zombie* new_zombie = newZombie("new_zombie");
	randomChump("random_chump");
	delete new_zombie;
	return (0);
}