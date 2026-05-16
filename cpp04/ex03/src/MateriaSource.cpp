#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource ::MateriaSource(std::string_view name) {
    (void)name;
    for (int i = 0; i < 4; ++i) {
        _materias[i] = nullptr;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; ++i) {
        if (other._materias[i]) {
            _materias[i] = other._materias[i]->clone();
        } else {
            _materias[i] = nullptr;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete _materias[i];
            if (other._materias[i]) {
                _materias[i] = other._materias[i]->clone();
            } else {
                _materias[i] = nullptr;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (_materias[i] == nullptr) {
            _materias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (_materias[i] && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return nullptr;
}
