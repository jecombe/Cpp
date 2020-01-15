/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:14:22 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:22 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type)
{
    name = _name;

}
Zombie::Zombie()
{
    return ;

}

Zombie::~Zombie()
{
    return;
}

std::string Zombie::annouce()
{
    std::string annouce;
   return (annouce = "<" + this->name + " " + "(" + this->type + ")" + "> " + "Braiiiiiiinnnssss..." + '\n');

}
void Zombie::setZombieType(std::string _type)
{
    this->type = _type;
}

void Zombie::setName(std::string _name)
{
    this->name = _name;
}