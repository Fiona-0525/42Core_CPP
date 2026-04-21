#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string_view name) {
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        horde[i].setName(std::to_string(i + 1) + " " + std::string(name));
    }
    return horde;
}
