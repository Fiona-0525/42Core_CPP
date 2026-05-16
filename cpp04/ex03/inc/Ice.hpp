#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(std::string_view type);
    Ice(const Ice &other);
    Ice& operator=(const Ice &other);
    ~Ice();

    AMateria* clone() const;
    void use(ICharacter& target);
    std::string const & getType() const;
};

#endif