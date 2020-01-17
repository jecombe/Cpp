/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 18:47:08 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 20:33:35 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
    std::cout << BOLDGREEN << "* click click click *" <<  RESET << std::endl;
}


RadScorpion::RadScorpion(const RadScorpion &r)
{
    *this = r;
}

RadScorpion::~RadScorpion()
{
    std::cout << BOLDRED <<  "* SPROTCH *"  << RESET << std::endl;
    return;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &en)
{
    Enemy::operator=(en);
    return *this;
}
