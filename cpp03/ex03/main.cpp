#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    std::cout << "==========CLAPTRAP TEST==========" << std::endl;
    ClapTrap clap("Clap");

    std::cout << "\n==========SCAVTRAP TEST==========" << std::endl;
    ScavTrap scav("Scav");

    std::cout << "\n==========FRAGTRAP TEST==========" << std::endl;
    FragTrap frag("Frag");

    std::cout << "\n==========DIAMONDTRAP TEST==========" << std::endl;
    DiamondTrap diamond("Diamond");

    std::cout << "\n------------ test attack---------------" << std::endl;
    clap.attack("Enemy");
    scav.attack("Enemy1");
    frag.attack("Enemy2");
    diamond.attack("Enemy3");

    // std::cout << "\n--- Test attack until no energy ---" << std::endl;
    // for (int i = 0; i < 50; i++) {
    //     std::cout << "Attack " << i + 1 << ": ";
    //     diamond.attack("Enemy1");
    // }

    std::cout <<"\n---------test damage & repair-------------" << std::endl;
    diamond.takeDamage(30);
    diamond.beRepaired(15);
    
    std::cout << "\n----- test special ability ---" <<   std::endl;
    diamond.whoAmI();

    std::cout << "\n==========Destruction=================" << std::endl;
    return 0;
}
