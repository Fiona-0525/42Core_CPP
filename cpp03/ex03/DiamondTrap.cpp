#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap default constructor called for " << _name << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(std::string_view name) : ClapTrap(std::string(name) + "_clap_name"), ScavTrap(std::string(name) + "_clap_name"), FragTrap(std::string(name) + "_clap_name")
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap parameterized constructor called for " << _name << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	_name = other._name;
	std::cout << "DiamondTrap copy constructor called for " << _name << std::endl;
}

// Copy assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	_name = other._name;
	std::cout << "DiamondTrap copy assignment operator called for " << _name << std::endl;
	return *this;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

// whoAmI function
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

// attack function - uses ScavTrap's attack
void DiamondTrap::attack(std::string_view target)
{
	ScavTrap::attack(target);
}
