#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
private:
    int              _rawBits;
    static const int _fractionalBits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);

    void setRawBits(int const raw);
    int  getRawBits(void) const;
};

#endif
