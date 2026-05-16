#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(std::string_view name);
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    ~MateriaSource();
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);

private:
    AMateria* _materias[4];
};

#endif
