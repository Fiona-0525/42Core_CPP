#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string_view type) : _type(type) {}

AMateria::AMateria(const AMateria& other) : _type(other._type) {}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
