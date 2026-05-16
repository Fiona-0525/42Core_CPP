#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string_view name);
	DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap &other);
	~DiamondTrap();

	void attack(const std::string& target) override;
	void whoAmI() const;

private:
	std::string _name;
};

#endif