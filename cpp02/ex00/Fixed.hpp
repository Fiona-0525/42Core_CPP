#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
public:
    Fixed();
    Fixed (const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

   void setRawBits(int const raw);
   int getRawBits(void) const;

private:
    int             _value = 0;
    static int const fractional = 8;
};

#endif
