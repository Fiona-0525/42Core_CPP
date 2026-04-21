#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string_view>
#include <iostream>

class Zombie {
private:
	std::string _name;
	std::string _type;

public:
	Zombie(std::string_view name); //Constructor -called when an object is created!
	~Zombie(void);
	void announce(void) const;
};

Zombie* newZombie( std::string_view name );
void randomChump( std::string_view name );

#endif
