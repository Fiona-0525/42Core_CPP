#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>
#include <string_view>

class Weapon {
private:
    std::string _type;

public:
    Weapon(std::string type);
    void setType(std::string_view newType);
    const std::string& getType() const;
};

#endif
