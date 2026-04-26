#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Clap1");
    ClapTrap b("Clap2");
    a.setAttackDamage(5);                    

    std::cout << "--------------------------combat-------------------------" << std::endl;
    a.attack("Clap2");
    b.takeDamage(0);

    std::cout << "-----------------------------repair------------------------------" << std::endl;
    a.beRepaired(5);

    std::cout << "--------------------------no energy test--------------------------" << std::endl;
    for (int i = 0; i < 10; i++) {
        a.attack("Clap2");
    }
    a.attack("Clap2");

    std::cout << "--------------------------no hit points test--------------------------" << std::endl;
    b.takeDamage(100);
    b.attack("Clap1");

    return 0;
}