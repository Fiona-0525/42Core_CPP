#ifndef BRAIN
# define BRAIN
#include <iostream>
#include <string>
#include <string_view>

class Brain {
public:
    Brain();
    Brain(std::string_view name);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();

private:
    std::string ideas[100];
};

#endif