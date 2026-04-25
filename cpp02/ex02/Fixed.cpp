#include "Fixed.hpp"

Fixed::Fixed() {}

Fixed::Fixed(const int value) : _value(value << _fractionalBits) {}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalBits))) {}

Fixed::Fixed(const Fixed& other) : _value(other._value) {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _value = other._value;
    }
    return *this;
}

Fixed::~Fixed() {}

bool Fixed::operator>(const Fixed& rhs) const {
    return _value > rhs._value;
}

bool Fixed::operator<(const Fixed& rhs) const {
    return _value < rhs._value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return _value >= rhs._value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return _value <= rhs._value;
}

bool Fixed::operator==(const Fixed& rhs) const {
    return _value == rhs._value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
    return _value != rhs._value;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    return Fixed(toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++() {
    ++_value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++_value;
    return temp;
}

Fixed& Fixed::operator--() {
    --_value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --_value;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return a;
    return b;
}

int Fixed::getRawBits() const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
