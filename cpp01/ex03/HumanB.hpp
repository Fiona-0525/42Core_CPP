#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon *_weapon = nullptr;
public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack();
};
