# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string_view>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string_view name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
   ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string _name;
    unsigned int _hitPoints = 10;
    unsigned int _energyPoints = 10;
    unsigned int _attackDamage = 0;
};

#endif