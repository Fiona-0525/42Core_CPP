#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(std::string_view type);
    Cure(const Cure &other);
    Cure& operator=(const Cure &other);
    ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
    std::string const & getType() const;
};

#endif