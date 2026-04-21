#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string_view>

class Zombie {
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    // Zombie(const std::string_view name);
    void setName(const std::string_view name);
    void announce () const;
};

Zombie* zombieHorde(int N, const std::string_view name);

#endif