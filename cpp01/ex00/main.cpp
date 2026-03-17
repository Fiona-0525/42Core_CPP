#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(){
	Zombie* heap = newZombie("HeapZombie");
	heap->announce();
	delete heap;

	std:: cout << " " << std::endl;

	randomChump("StackZombie");
	return 0;
}
