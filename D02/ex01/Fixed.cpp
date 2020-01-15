#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout <<"Default constructor called " << std::endl;
    pointValue = 0;

}

Fixed::Fixed(const int value)
{
    std::cout <<"Int constructor called " << std::endl;
    pointValue = value << nbFracBits;
    return;
}

Fixed::Fixed(const float value)
{
    std::cout <<"Float constructor called" << std::endl;
    pointValue = roundf(value * (1 << nbFracBits));

    return ;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout <<"Copy constructor called" << std::endl;
    *this = f;
    return ;
}

Fixed::~Fixed()
{
    std::cout <<"Destructor called" << std::endl;
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
    
     std::cout << "getRawBits member function called" << std::endl;
     return (pointValue);
}

void Fixed::setRawBits(int const raw){pointValue = raw;}


Fixed & Fixed::operator=(const Fixed &f) 
{
    std::cout <<"Assignation operator called" << std::endl;
    pointValue = f.getRawBits();
  
    return *this;
}
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    std::cout <<"Assignation operator called" << std::endl;  
    o << rhs.toFloat();
    return o;
}