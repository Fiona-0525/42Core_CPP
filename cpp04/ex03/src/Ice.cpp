#include "../inc/Ice.hpp"
#include "../inc/Character.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string_view type) : AMateria(type) {}

Ice::Ice(const Ice &other) : AMateria(other) {}

Ice& Ice::operator=(const Ice &other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const & Ice::getType() const {
    return _type;
}
