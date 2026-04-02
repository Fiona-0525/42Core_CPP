#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <array>
#include <iomanip>
#include <iostream>
#include <string_view>
#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int index = 0;
    int total = 0;

public:
    PhoneBook(void) = default;
    ~PhoneBook(void) = default;

    void add(void);
    void search(void);
    void display_table(void) const;
    int get_total(void) const;
};

#endif