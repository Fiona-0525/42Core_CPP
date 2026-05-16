#ifndef WRONGANIMAL
# define WRONGANIMAL
#include <iostream>
#include <string>
#include <string_view>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(std::string_view name);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    ~WrongAnimal();
    
    void makeSound() const;
    std::string getType() const;
    
protected:
    std::string _type;
};

#endif