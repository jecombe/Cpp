/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Scalable.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 17:15:54 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 20:35:24 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Scalable.hpp"
#include <iostream>
#include <cmath>
#include <cfloat>

Scalable::Scalable(const char *input)
{
    _input = input;
    _double = atof(input);
 
}

Scalable::~Scalable() { return; }

//methods
char Scalable::convertChar()
{
    if (isnan(getDouble()))
        throw ImpossibleExecption();
    if (!isprint(static_cast<char>(getDouble())))
        throw NotPrintExecption();
    return static_cast<char>(getDouble());
}

int Scalable::convertInt()
{
    if (isnan(getDouble()) || isinf(getDouble()))
        throw ImpossibleExecption();
    if (getDouble() < (INT_MIN) || getDouble() > (INT_MAX))
        throw ImpossibleExecption();
    return static_cast<int>(getDouble());
}

float Scalable::convertFloat()
{
    return (static_cast<float>(_double));
}

double Scalable::convertDouble()
{
    return getDouble();
}


double Scalable::getDouble() const { return _double; }
int Scalable::getInt() const { return _int; }
float Scalable::getFloat() const { return _float; }
char Scalable::getChar() const { return _char; }
unsigned long int Scalable::getPrecision() const {return _precision;};

const char *Scalable::NotPrintExecption::what(void) const throw()
{
    return " Non displayable";
}
const char *Scalable::ImpossibleExecption::what(void) const throw()
{
    return " impossible";
}
