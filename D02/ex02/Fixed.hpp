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
    Fixed operator+(Fixed const &f);
    Fixed operator-(Fixed const &f);
    Fixed operator*(Fixed const &f);
    Fixed operator/(Fixed const &f);
    Fixed &         operator++  ();
    Fixed           operator++  (int n);
    Fixed &         operator--  ();
    Fixed           operator--  (int n);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    bool operator>(Fixed const &f);
    bool operator<(Fixed const &f);
    bool operator<=(Fixed const &f);
    bool operator>=(Fixed const &f);
    bool operator==(Fixed const &f);
    bool operator!=(Fixed const &f);
    static Fixed &min(Fixed &fOne, Fixed &fTwo);
    const static  Fixed &min(const Fixed &fOne, const Fixed &fTwo);
    static Fixed &max(Fixed &fOne, Fixed &fTwo);
    const static Fixed &max(const Fixed &fOne, const Fixed &fTwo);


private:
    int pointValue;
    static const int nbFracBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif