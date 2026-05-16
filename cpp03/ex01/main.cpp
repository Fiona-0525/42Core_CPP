#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "==========CLAPTRAP TEST==========" << std::endl;
    ClapTrap clap("Clap");

    std::cout << "\n==========SCAVTRAP TEST==========" << std::endl;
    ScavTrap scav("Scav");

    std::cout << "\n------------ test attack---------------" << std::endl;
    clap.attack("Enemy");
    scav.attack("Enemy1");

    // std::cout << "\n--- Test attack until no energy ---" << std::endl;
    // for (int i = 0; i < 50; i++) {
    //     std::cout << "Attack " << i + 1 << ": ";
    //     scav.attack("Enemy1");
    // }

    std::cout <<"\n---------test damage & repair-----------" << std::endl;
    scav.takeDamage(30);
    scav.beRepaired(15);

    std::cout << "\n----- test special ability---" << std::endl;
    scav.guardGate();
    
    std::cout << "\n==========Destruction===============" << std::endl;
    return 0;
}
