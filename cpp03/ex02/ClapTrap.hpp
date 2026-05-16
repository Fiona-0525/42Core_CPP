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

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    std::string _name;
    unsigned int _hitPoints = 100;
    unsigned int _energyPoints = 100;
    unsigned int _attackDamage = 30;
};

#endif