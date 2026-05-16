#ifndef DOG_HPP
# define DOG_HPP
#include "animal.hpp"
#include <string>

class Dog : public Animal {
public:
    Dog();
    Dog(std::string_view name);
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();

    void makeSound() const override;
    std::string getType() const override;
};

#endif