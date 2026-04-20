#ifndef FIXED_HPP
# define FIXED_HPP
#include <cmath>
# include <iostream>

class Fixed {
private:
    int              _rawBits = 0;
    static const int _fractionalBits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);

    Fixed(const int value);
    Fixed(const float value);
    float toFloat(void) const;
    int toInt(void) const;

    void setRawBits(int const raw);
    int  getRawBits(void) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
