#include "Fixed.hpp"

Fixed::Fixed() {}

Fixed::Fixed(const int i): _value(i * (1 << _fractionalBits)) {}

Fixed::Fixed(const float f): _value(roundf(f * (1 << _fractionalBits))) {}

Fixed::Fixed(const Fixed &other): _value(other._value) {}

Fixed& Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        this->_value = other._value;
    }
    return *this;
}

Fixed::~Fixed() {}

bool Fixed::operator==(const Fixed &other) const {
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->_value != other._value;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->_value < other._value;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->_value <= other._value;
}

bool Fixed::operator>(const Fixed &other) const {
    return this->_value > other._value;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->_value >= other._value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    operator++();
    return temp;
}

Fixed& Fixed::operator--() 
{
    _value--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    operator--();
    return temp;
}

Fixed& Fixed::min( Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return a;
    return b;
}

int Fixed::getRawBits() const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return _value >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) {
    output << fixed.toFloat();
    return output;
}
