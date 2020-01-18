
#ifndef PLASMA_RIFLE_H
#define PLASMA_RIFLE_H

//Librairie
#include <iostream>
#include <string.h>
#include <sstream>

#include "AWeapon.hpp"

//Color 
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */

class PlasmaRifle : public AWeapon
{
    
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &aw); 
        virtual ~PlasmaRifle();
        PlasmaRifle & operator=(PlasmaRifle const &aw);

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const;
        
    private: 
        std::string _name;
        int _apPoint;
        int _damagePoint;
};

#endif