#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "==================== ClapTrap Testing ====================" << std::endl;
    {
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
    }
    
    std::cout << "\n==================== ScavTrap Testing ====================" << std::endl;
    {
        std::cout << "----- Construction/Destruction Chaining Demo -----" << std::endl;
        ScavTrap scav1("ScavOne");
        
        std::cout << "\n----- ScavTrap vs ClapTrap Attack Difference -----" << std::endl;
        scav1.attack("Enemy");
        
        std::cout << "\n----- Guardian Gate Test -----" << std::endl;
        scav1.guardGate();
        
        std::cout << "\n----- ScavTrap with 100 HP and 50 EP -----" << std::endl;
        scav1.attack("Target1");
        scav1.attack("Target2");
        scav1.beRepaired(10);
        
        std::cout << "\n----- Copy Constructor Test -----" << std::endl;
        ScavTrap scav2(scav1);
        
        std::cout << "\n----- Assignment Operator Test -----" << std::endl;
        ScavTrap scav3("ScavThree");
        scav3 = scav1;
    }

    std::cout << "\n==================== FragTrap Testing ====================" << std::endl;
    {
        std::cout << "----- Construction/Destruction Chaining Demo -----" << std::endl;
        FragTrap frag1("FragOne");
        
        std::cout << "\n----- FragTrap Stats: 100 HP, 100 EP, 30 Damage -----" << std::endl;
        frag1.attack("Enemy");
        frag1.attack("Enemy");
        
        std::cout << "\n----- High Five Request Test -----" << std::endl;
        frag1.highFivesGuys();
        
        std::cout << "\n----- Repair Test -----" << std::endl;
        frag1.beRepaired(20);
        
        std::cout << "\n----- Copy Constructor Test -----" << std::endl;
        FragTrap frag2(frag1);
        
        std::cout << "\n----- Assignment Operator Test -----" << std::endl;
        FragTrap frag3("FragThree");
        frag3 = frag1;
        
        std::cout << "\n----- Multiple Attacks (100 EP) -----" << std::endl;
        for (int i = 0; i < 5; i++) {
            frag1.attack("Target");
        }
    }
    
    std::cout << "\n==================== Program End ====================" << std::endl;
    return 0;
}