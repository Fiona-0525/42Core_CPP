#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>
#include <string_view>

class Animal {
public:
    Animal();
    Animal(std::string_view name);
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);
    virtual ~Animal();

    virtual void makeSound() const = 0;
    virtual std::string getType() const;

protected:
    std::string _type;
};

#endif