
#ifndef CHARACTER_H
#define CHARACTER_H

//Librairie
#include <iostream>
#include <string.h>
#include <sstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

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


class Character
{
    
    public:
        Character(std::string const & name);
        Character(const Character &ch);
        Character();
        ~Character();

        Character & operator=(Character const &ch);


        //methods
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);

        //getter
        AWeapon *getWeapon() const;
        std::string getName() const;
        int getActionPoint() const;

    
    private:
        std::string _name;
        int _actionPoint;
        AWeapon *_weapon;

};
std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif