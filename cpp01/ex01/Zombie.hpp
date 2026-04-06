#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie() = default;
    ~Zombie();
    Zombie(std::string name);
    void setName(std::string_view name);
    void announce () const;
};

Zombie* zombieHorde(int N, std::string name);

#endif