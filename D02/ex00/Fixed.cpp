#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout <<"Default constructor called " << std::endl;
    pointValue = 0;
    return;
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

int Fixed::getRawBits(void) const
{
    
     std::cout <<"getRawBits member function called" << std::endl;
     return (pointValue);
}

void Fixed::setRawBits(int const raw){pointValue = raw;}


Fixed & Fixed::operator=(const Fixed &f) 
{
    std::cout <<"Assignation operator called" << std::endl;
    pointValue = f.getRawBits();
  
    return *this;
}