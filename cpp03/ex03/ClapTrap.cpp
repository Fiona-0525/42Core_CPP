#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string_view name) : _name(name) {
    std::cout << "ClapTrap parameterized constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called for " << _name << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << " for " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }else
        std::cout << "ClapTrap " << _name << " cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints > 0) {
        if (amount >= _hitPoints) {
            std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
            _hitPoints = 0;
        } else {
            std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
            _hitPoints -= amount;
        }
    }else
        std::cout << "ClapTrap " << _name << " cannot take damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
        _hitPoints += amount;
    }else
        std::cout << "ClapTrap " << _name << " cannot be repaired!" << std::endl;
}
