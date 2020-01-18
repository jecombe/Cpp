/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 18:21:57 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 20:33:47 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << BOLDGREEN << "Gaaah. Me want smash heads !" <<  RESET << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &s) {*this = s;}

SuperMutant::~SuperMutant()
{
    std::cout << BOLDRED <<  "Aaargh ..."  << RESET << std::endl;
    return;
}


SuperMutant &SuperMutant::operator=(const SuperMutant &en)
{
    Enemy::operator=(en);
    return *this;
}



void SuperMutant::takeDamage(int damage)
{
    if (damage < 3)
        return;
    damage -= 3;
    if (this->getHP() == 0)
        return ;
    if (damage > this->getHP())
        this->setHp(damage - this->getHP());
    else
    this->setHp(this->getHP() - damage);
}