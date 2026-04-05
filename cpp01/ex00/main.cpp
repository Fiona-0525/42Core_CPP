#include "Zombie.hpp"

int main()
{
	std::cout << "--- Creating a heap zombie ---" << std::endl;
	Zombie* new_zombie = newZombie("new_zombie");
	new_zombie->announce();
	std::cout << "--- Creating a stack zombie ---" << std::endl;
	randomChump("random_zombie");
	std::cout << "--- About to delete the heap zombie ---" << std::endl;
	delete new_zombie;
	std::cout << "--- End of program ---" << std::endl;
	return (0);
}