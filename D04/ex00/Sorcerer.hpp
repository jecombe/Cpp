#ifndef SORCERER_H
#define SORCERER_H

//Librairie
#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>
#include "Victim.hpp"
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



class Sorcerer
{
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer &c);
        Sorcerer();
        ~Sorcerer();
        Sorcerer & operator=(Sorcerer const &s);

        //Setter
        void setName(std::string name);
        void setTitle(std::string title);

        //Getter
        std::string getName() const;
        std::string getTitle() const;

        //polymorph
        void polymorph(Victim const &) const;

    private:
    std::string _name;
    std::string _title;

};
std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif