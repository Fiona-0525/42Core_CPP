#include "Zombie.hpp"

int main () {
    int N= 5;
    std::string name = "Zombie";

    std::cout << "Creating a horde of " << N << " zombies named " << name << ":" << std::endl;
    Zombie* horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    std::cout << "\nDestroying the horde..." << std::endl;
    delete[] horde;
    return 0;
}
