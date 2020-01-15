#include "Fixed.hpp"

Fixed::Fixed()
{
    pointValue = 0;

}

Fixed::Fixed(const int value)
{
    pointValue = value << nbFracBits;
    return;
}

Fixed::Fixed(const float value)
{
    pointValue = roundf(value * (1 << nbFracBits));
    return ;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
    return ;
}

Fixed::~Fixed()
{
    return;
}

int Fixed::toInt(void) const
{    
    return pointValue >> nbFracBits;
}

float Fixed::toFloat(void) const
{
    return ((float)pointValue / (1 << nbFracBits)); 
}


int Fixed::getRawBits(void) const
{
    
     return (pointValue);
}

void Fixed::setRawBits(int const raw){pointValue = raw;}

Fixed & Fixed::operator=(const Fixed &f) 
{
    pointValue = f.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &f) 
{
   return Fixed(toFloat() + f.toFloat());
}
Fixed Fixed::operator-(const Fixed &f) 
{
   return Fixed(toFloat() - f.toFloat());
}
Fixed Fixed::operator*(const Fixed &f) 
{
   return Fixed(toFloat() * f.toFloat());
}
Fixed Fixed::operator/(const Fixed &f) 
{
   return Fixed(toFloat() / f.toFloat());
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator> (Fixed const &f)
{
    return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator< (Fixed const &f)
{
    return (this->getRawBits() < f.getRawBits());
}
bool Fixed::operator<= (Fixed const &f)
{
    return (this->getRawBits() <= f.getRawBits());
}
bool Fixed::operator>= (Fixed const &f)
{
    return (this->getRawBits() >= f.getRawBits());
}
bool Fixed::operator== (Fixed const &f)
{
    return (this->getRawBits() == f.getRawBits());
}
bool Fixed::operator!= (Fixed const &f)
{
    return (this->getRawBits() != f.getRawBits());
}

Fixed &Fixed::min(Fixed &fOne, Fixed &fTwo)
{
    if (fOne > fTwo)
        return (fTwo);
    else
        return (fOne);
}

const Fixed &Fixed::min(const Fixed &fOne, const Fixed &fTwo)
{
    if ((Fixed &)fOne > (Fixed &)fTwo)
        return (fTwo);
    else
        return (fOne);
}

Fixed &Fixed::max(Fixed &fOne, Fixed &fTwo)
{
     if (fOne < fTwo)
        return (fTwo);
    else
        return (fOne);
}

const Fixed &Fixed::max(const Fixed &fOne, const Fixed &fTwo)
{
     if ((Fixed &)fOne < (Fixed &)fTwo)
        return (fTwo);
    else
        return (fOne);
}

Fixed & Fixed::operator++()
{
    setRawBits(getRawBits() + 1);
    return *this;
}
Fixed Fixed::operator++(int n)
{
    (void)n;
    Fixed tmp(*this);
    ++*this;
    return tmp;
}
Fixed & Fixed::operator--()
{
    setRawBits(getRawBits() - 1);
    return *this;
}
Fixed Fixed::operator--(int n)
{
    (void)n;
    Fixed tmp(*this);
    --*this;
    return tmp;
}