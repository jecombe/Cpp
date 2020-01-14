/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:13:38 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:13:39 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string _name, int _age)
{
    std::cout << "Pony object constructor " << std::endl;
    name = _name;
    age = _age;
}

Pony::~Pony()
{
    std::cout << "Pony object destructor"  << std::endl;
}

void Pony::setName(std::string _name)
{
    this->name = _name;
}

void Pony::setAge(int _age)
{
    this->age = _age;
}

std::string Pony::getName()
{
    return (this->name);
}

int Pony::getAge()
{
    return (this->age);
}