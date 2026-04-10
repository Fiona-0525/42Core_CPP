#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <string_view>

class Zombie {
private:
	std::string _name;
	std::string _type;

public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
