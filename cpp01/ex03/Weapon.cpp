#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

void Weapon::setType(std::string_view newType) {
    _type = newType;
}

const std::string &Weapon::getType() const {
    return _type;
}

