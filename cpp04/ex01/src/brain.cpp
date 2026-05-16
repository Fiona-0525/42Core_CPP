#include "../inc/brain.hpp"

Brain::Brain() {
    std::cout << " 🧠 brain for animal created." << std::endl;
}

Brain::Brain(std::string_view name) {
    for (int i = 0; i < 100; i++)
        ideas[i] = "Idea " + std::to_string(i) + " for " + std::string(name);
    std::cout << " 🧠 brain for " << name << " created." << std::endl;
}

Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << " 🧠 brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
        std::cout << " 🧠 brain assignment operator called." << std::endl;
    }
    return *this;
}

Brain::~Brain() {
    std::cout << " 🧠 brain destroyed." << std::endl;
}
