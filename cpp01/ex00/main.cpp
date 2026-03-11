#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(){
	Zombie* heap = newZombie("HeapZombie");
	heap->announce();
	delete heap;

	randomChump("StackZombie");

	return 0;
}
