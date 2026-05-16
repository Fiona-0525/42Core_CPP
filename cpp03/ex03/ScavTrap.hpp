#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include <string_view>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string_view name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void guardGate();
};

#endif