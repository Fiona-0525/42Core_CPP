#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(std::string_view name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap parameterized constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	ClapTrap::operator=(fragTrap);
	std::cout << "FragTrap copy assignment operator called for " << _name << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for " << _name << std::endl;
}

void FragTrap::attack(std::string_view target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "FragTrap " << _name << " cannot attack due to insufficient energy or hit points." << std::endl;
	}
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " requests high-fives: \"Come on guys, let's celebrate!\"" << std::endl;
}
