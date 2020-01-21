/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Scalable.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 17:14:10 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 20:05:00 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCALABLE_H
#define SCALABLE_H

//Librairie
#include <iostream>
#include <string.h>
#include <sstream>
#include <exception>

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

class Scalable
{

public:
    Scalable(char *);
    ~Scalable();

    //methods
    char convertChar();
    int convertInt();
    float convertFloat();
    double convertDouble();
    unsigned long int presiscion();
    char getChar() const;
    int getInt() const;
    float getFloat() const;
    double getDouble() const;

       class NotPrintExecption : public std::exception 
        {
            public:
             virtual const char * what(void) const throw ();

            private:
        };

       class ImpossibleExecption : public std::exception 
        {
            public:
             virtual const char * what(void) const throw ();

            private:
        };
    
    

private:
    std::string _input;
    unsigned long int _precision;
    char _char;
    int _int;
    float _float;
    double _double;
};

//operator ostream
std::ostream &operator<<(std::ostream &, Scalable const &);

#endif