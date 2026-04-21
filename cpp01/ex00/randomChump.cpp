#include "Zombie.hpp"

void randomChump( std::string_view name )
{
	Zombie new_zombie(name);  // created a stack Zombie
	new_zombie.announce();
}
  