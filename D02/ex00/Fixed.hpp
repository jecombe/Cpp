#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <string.h>
#include <sstream>

class Fixed{
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
         int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed & operator=(Fixed const &f);
    private:
        int pointValue;
        static const int nbFracBits = 8;
        
};
#endif