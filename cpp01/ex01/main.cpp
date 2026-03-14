#include "Zombie.hpp"
#include <iostream>

int main(void) {
	int N = 5;
	std::string name = "Zombie";
	
	std::cout << "=== Creating a horde of " << N << " zombies ===" << std::endl;
	Zombie *horde = zombieHorde(N, name);
	
	std::cout << "\n=== Making zombies announce themselves ===" << std::endl;
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	
	std::cout << "\n=== Destroying the horde ===" << std::endl;
	delete[] horde;
	
	return 0;
}
