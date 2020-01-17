/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 20:21:24 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:31:56 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << BOLDGREEN << "Create new Object NinjaTrapp with name: " << _name << RESET << std::endl;
}
NinjaTrap::NinjaTrap(const NinjaTrap &f) : ClapTrap(f)
{
    std::cout << BOLDGREEN << "Copy Object NinjaTrapp with name: " << _name << RESET << std::endl;
}
NinjaTrap::~NinjaTrap()
{
    std::cout << BOLDGREEN << "Destructor Object NinjaTrapp with name: " << _name << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &n){std::cout << BLUE << "NINJA Ninja" << n.getName() << RESET << std::endl;}
void NinjaTrap::ninjaShoebox(FragTrap &f){std::cout << BLUE << "NINJA FragTrap" << f.getName() << RESET << std::endl;}
void NinjaTrap::ninjaShoebox(ScavTrap &s){std::cout << BLUE << "NINJA ScavTrap" << s.getName() << RESET << std::endl;}
void NinjaTrap::ninjaShoebox(ClapTrap &c){std::cout << BLUE << "NINJA ClapTrap" << c.getName() << RESET << std::endl;}


NinjaTrap &NinjaTrap::operator=(const NinjaTrap &n)
{
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    _hitsPoints = n._hitsPoints;
    _maxHitsPoint = n._maxEnergyPoint;
    _energyPoint = n._energyPoint;
    _level = n._level;
    _meleeAttackDamage = n._meleeAttackDamage;
    _rangedAttackDamage = n._rangedAttackDamage;
    _armorDamageReduction = n._armorDamageReduction;
    _name = n._name;

    return *this;
}
