/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 17:36:19 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 20:33:16 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){return;}
Enemy::Enemy(){return;};
Enemy::Enemy(const Enemy &en){*this = en;}
Enemy::~Enemy(){return;}


Enemy &Enemy::operator=(const Enemy &en)
{
    _hp = en._hp;
    _type = en._type;
    return *this;
}


std::string Enemy::getType() const{return _type;}
int Enemy::getHP() const{ return _hp;}

void Enemy::takeDamage(int domage)
{
    int dom = _hp - domage;
    if (dom <= 0 && domage > 0)
    {
        _hp = 0;
        return ;
    }
    else
         _hp = dom;
}
void Enemy::setType(std::string type){_type = type;}
void Enemy::setHp(int hp){_hp = hp;}