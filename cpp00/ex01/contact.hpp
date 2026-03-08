#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string_view>

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact(void) = default;
    ~Contact(void) = default;

    void set_first_name(const std::string_view first_name);
    void set_last_name(const std::string_view last_name);
    void set_nickname(const std::string_view nickname);
    void set_phone_number(const std::string_view phone_number);
    void set_darkest_secret(const std::string_view darkest_secret);

    std::string get_first_name(void) const;
    std::string get_last_name(void) const;
    std::string get_nickname(void) const;
    std::string get_phone_number(void) const;
    std::string get_darkest_secret(void) const;
};

#endif

