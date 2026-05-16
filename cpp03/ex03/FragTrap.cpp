#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(std::string_view name) : ClapTrap(name) {
    std::cout << "FragTrap parameterized constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap copy assignment operator called for " << _name << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a high five! 🙌" << std::endl;
}
