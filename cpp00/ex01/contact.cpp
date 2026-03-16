#include "contact.hpp"

void Contact::set_first_name(const std::string_view _first_name){
    this->_first_name = _first_name;
}

void Contact::set_last_name(const std::string_view _last_name){
    this->_last_name = _last_name;
}

void Contact::set_nickname(const std::string_view _nickname){
    this->_nickname = _nickname;
}

void Contact::set_phone_number(const std::string_view _phone_number){
    this->_phone_number = _phone_number;
}

void Contact::set_darkest_secret(const std::string_view _darkest_secret){
    this->_darkest_secret = _darkest_secret;
}

std::string Contact::get_first_name(void) const{
    return this->_first_name;
}

std::string Contact::get_last_name(void) const{
    return this->_last_name;
}

std::string Contact::get_nickname(void) const{
    return this->_nickname;
}

std::string Contact::get_phone_number(void) const{
    return this->_phone_number;
}

std::string Contact::get_darkest_secret(void) const{
    return this->_darkest_secret;
}
