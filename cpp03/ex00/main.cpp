#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "==========CLAPTRAP TEST==========" << std::endl;
    ClapTrap clap("Clap");

    // std::cout << "\n------------ test attack---------------" << std::endl;
    // clap.attack("Enemy");

    std::cout << "\n--- Test attack until no energy ---" << std::endl;
    for (int i = 0; i < 11; i++) {
        std::cout << "Attack " << i + 1 << ": ";
        clap.attack("Enemy1");
    }

    std::cout <<"\n--------test damage & repair----------" << std::endl;
    clap.takeDamage(30);
    clap.beRepaired(15);

    std::cout << "\n==========Destruction=================" << std::endl;
    return 0;
}