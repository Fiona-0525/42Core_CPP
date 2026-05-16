#ifndef CAT_HPP
# define CAT_HPP
#include "animal.hpp"
#include "brain.hpp"
#include <string>

class Cat : public Animal {
public:
    Cat();
    Cat(std::string_view name);
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    ~Cat();

    void makeSound() const override;
    std::string getType() const override;

private:
    Brain* _brain;
};

#endif