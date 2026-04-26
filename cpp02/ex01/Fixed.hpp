#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed (const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

   void setRawBits(int const raw);
   int getRawBits(void) const;
   float toFloat( void ) const;
   int toInt( void ) const;

private:
    int             _value = 0;
    static int const _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
