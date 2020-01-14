/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 22:13:57 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 22:14:00 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type): name(_name), type(_type)
{
    return ;

}

Zombie::~Zombie()
{
    return;
}

std::string Zombie::announce()
{
    std::string annouce;
   return (annouce = "<" + this->name + " " + "(" + this->type + ")" + "> " + "Braiiiiiiinnnssss..." + '\n');

}


