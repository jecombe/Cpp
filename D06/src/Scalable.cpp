/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Scalable.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 17:15:54 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 20:21:17 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Scalable.hpp"
#include <iostream>
#include <cmath>
#include <cfloat>

Scalable::Scalable(char *input) : _input(input)
{
    _precision = presiscion();
    _double = atof(input);
 
}
Scalable::~Scalable() { return; }

//methods
char Scalable::convertChar()
{
    if (std::isnan(getDouble()) == true)
        throw ImpossibleExecption();
    if (std::isprint(static_cast<char>(getDouble())) == false)
        throw NotPrintExecption();
        
        return static_cast<char>(getDouble());
}

int Scalable::convertInt()
{
    if (isnan(getDouble()) == true || isinf(getDouble()) == true)
        throw ImpossibleExecption();
    if (getDouble() < INT_MAX || getDouble() > INT_MIN)
        throw ImpossibleExecption();
    return static_cast<int>(getDouble());
}

float Scalable::convertFloat()
{
    return static_cast<float>(getDouble());
}

double Scalable::convertDouble()
{
    return getDouble();
}

unsigned long int Scalable::presiscion()
{
    unsigned long int after = 0;
    unsigned long int indiceP = 0;

    if ((indiceP = _input.find('.')) != std::string::npos)
        after = indiceP + 1;
    while (_input[after] && isdigit(_input[after]))
        after += 1;
    after -= indiceP;
    if (_input.length() == indiceP || after == 1)
        return 1;
    else
        return after - 1;
}

double Scalable::getDouble() const { return _double; }
int Scalable::getInt() const { return _int; }
float Scalable::getFloat() const { return _float; }
char Scalable::getChar() const { return _char; }

const char *Scalable::NotPrintExecption::what(void) const throw()
{
    return " Non displayable";
}
const char *Scalable::ImpossibleExecption::what(void) const throw()
{
    return " impossible";
}
