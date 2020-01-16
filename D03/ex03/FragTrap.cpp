/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:01:50 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:02:15 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

//CONSTRUCTEUR / DESTRUCTEUR
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{

    std::cout << BOLDGREEN << "Create new Object FragTrap with name: " << _name << RESET << std::endl;
    _randomAttackDamage = 10;
  
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{

    std::cout << BOLDGREEN << "Create new Object FragTrap with name: " << _name << RESET << std::endl;
    _randomAttackDamage = 10;
  
}


FragTrap &FragTrap::operator=(const FragTrap &f)
{
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    _hitsPoints = f._hitsPoints;
    _maxHitsPoint = f._maxEnergyPoint;
    _energyPoint = f._energyPoint;
    _level = f._level;
    _meleeAttackDamage = f._meleeAttackDamage;
    _rangedAttackDamage = f._rangedAttackDamage;
    _randomAttackDamage = f._randomAttackDamage;
    _armorDamageReduction = f._armorDamageReduction;
    _name = f._name;

    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << BOLDRED << "Destroy Object FragTrap with name: " << _name << RESET << std::endl;
}

//METHODS


void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (_energyPoint > 25)
    {
        _energyPoint = _energyPoint - 25;

        srand(time(nullptr));
        int fctRandom = rand() % 5;

        if (fctRandom == 0)
            FragTrap::attackAcid(target);
        else if (fctRandom == 1)
            FragTrap::attackFire(target);
        else if (fctRandom == 2)
            FragTrap::attackWater(target);
        else if (fctRandom == 3)
            FragTrap::attackGas(target);
        else
            FragTrap::attackNuclear(target);
    }
    else
    {
        std::cout << RED << "ERROR " << _name << " YOU NEED MORE 25 ENERGY POINT " << RESET << std::endl;
        return;
    }
}

//ATTACK
void FragTrap::attackAcid(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with acid attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void FragTrap::attackFire(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with fire attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void FragTrap::attackWater(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with water attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void FragTrap::attackGas(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with gas attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void FragTrap::attackNuclear(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with nuclear attack, causing " << _rangedAttackDamage << RESET << std::endl;}

//SETTER

void FragTrap::setRandomAttackDamage() {}

//GETTER

unsigned int FragTrap::getRandomAttackDamage() const { return _randomAttackDamage; }