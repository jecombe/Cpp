#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>


class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &f);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed &operator=(Fixed const &f);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int pointValue;
    static const int nbFracBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif