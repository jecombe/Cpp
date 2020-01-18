/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 18:57:12 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 21:00:23 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"

Character::Character(){}
Character::Character(std::string const & name)
{
    _name = name;
    _actionPoint = 40;
    _weapon = nullptr;

}
Character::Character(const Character &ch) {*this = ch;}
Character::~Character(){return ;}


Character &Character::operator=(const Character &c)
{
    _name = c._name;
    _weapon = c._weapon;
    _actionPoint = c._actionPoint;
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    return *this;
}
std::ostream &operator<<(std::ostream &o, Character const &ch)
{
    if (ch.getWeapon() != nullptr)
        o << ch.getName() << " has " << ch.getActionPoint() << " AP and wields a " << ch.getWeapon()->getName() << std::endl;
    else
        o << ch.getName() << " has " << ch.getActionPoint() << " and is unarmed " << std::endl;
    return o;
}


void Character::recoverAP()
{
    if (_actionPoint <= 30)
        _actionPoint = _actionPoint + 10;
    else
    _actionPoint = 40;
    
}
void Character::equip(AWeapon *weapon){_weapon = weapon;}
void Character::attack(Enemy *enemy)
{
    if (!enemy->getHP())
    return ;
    if (_weapon != nullptr && enemy != nullptr)
    {
        int price = _weapon->getAPCost();

        if (_actionPoint - price > 0)
        {
            _weapon->attack();
            enemy->takeDamage(_weapon->getDamage());
            if (enemy->getHP() < 1)
                delete enemy;
        _actionPoint = _actionPoint - price;
        }
        std::cout << CYAN << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << RESET << std::endl;
        enemy = nullptr;
    }

}

//getter
AWeapon *Character::getWeapon() const{return _weapon;}
std::string Character::getName() const{return _name;}
int Character::getActionPoint() const{return _actionPoint;}

