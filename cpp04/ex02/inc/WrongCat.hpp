#ifndef WRONGCAT
# define WRONGCAT
#include <iostream>
#include <string>
#include <string_view>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(std::string_view name);
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    ~WrongCat();

    void makeSound() const;
};

#endif