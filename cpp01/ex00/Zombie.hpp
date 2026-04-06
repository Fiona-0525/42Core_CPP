#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {
	private:
	std::string name;
	std::string type;

	public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void setName(std::string_view n);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
