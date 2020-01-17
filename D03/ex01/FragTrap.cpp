/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:01:50 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:05:17 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"

//CONSTRUCTEUR / DESTRUCTEUR
FragTrap::FragTrap(std::string name) : _name(name)
{
    std::cout << BOLDGREEN << "Create new Object FragTrap with name: " << _name << RESET << std::endl;
    _hitsPoints = 100;
    _maxHitsPoint = 100;
    _energyPoint = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _randomAttackDamage = 12;
    _armorDamageReduction = 5;
}
FragTrap &FragTrap::operator=(const FragTrap &f)
{
    std::cout << BOLDYELLOW << "Assignation FragTrap operator called" << std::endl;
    _hitsPoints = f.getHitsPoints();
    _maxHitsPoint = f.getMaxHitsPoint();
    _energyPoint = f.getEnergyPoint();
    _level = f.getLevel();
    _meleeAttackDamage = f.getMeleeAttackDamage();
    _rangedAttackDamage = f.getRangedAttackDamage();
    _randomAttackDamage = f.getRandomAttackDamage();
    _armorDamageReduction = f.getArmorDamageReduction();
    _name = f.getName();

    return *this;
}

FragTrap::~FragTrap(){std::cout << BOLDRED << "Destroy Object FragTrap with name: " << _name << RESET << std::endl;}

//METHODS
void FragTrap::rangedAttack(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " at range, causing " << _rangedAttackDamage << RESET << std::endl;}

void FragTrap::meleeAttack(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " at melee, causing " << _meleeAttackDamage << RESET << std::endl;}

void FragTrap::takeDamage(unsigned int amount)
{
    unsigned int damage = amount - _armorDamageReduction;

    if (damage < _hitsPoints)
    {
        std::cout << GREEN << "ALIVE " << _name << RESET << std::endl;
        setHitsPoints(_hitsPoints - damage);
    }
    else
    {
        setHitsPoints(0);
        std::cout << RED << "DEAD" << RESET << std::endl;
    }
    std::cout << YELLOW << "You have " << _hitsPoints << " /" << _maxHitsPoint << RESET << std::endl;


}

void FragTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint > amount)
    {
        setEnergyPoint(_energyPoint - amount);
        setHitsPoints(amount + _hitsPoints);
        std::cout << GREEN << "FR4G-TP Be Repaired" << _name << RESET << std::endl;
    }
    else
        std::cout << GREEN << "Can't be repaired" << _name << RESET << std::endl;
    std::cout << YELLOW << "ENERGY POINT -> You have " << _energyPoint << "/" << _maxEnergyPoint << RESET << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (_energyPoint > 25)
    {
        setEnergyPoint(_energyPoint - 25);
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
void FragTrap::attackAcid(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " with acid attack, causing " << _randomAttackDamage << RESET << std::endl;}
void FragTrap::attackFire(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " with fire attack, causing " << _randomAttackDamage << RESET << std::endl;}
void FragTrap::attackWater(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " with water attack, causing " << _randomAttackDamage << RESET << std::endl;}
void FragTrap::attackGas(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " with gas attack, causing " << _randomAttackDamage << RESET << std::endl;}
void FragTrap::attackNuclear(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " with nuclear attack, causing " << _randomAttackDamage << RESET << std::endl;}

//SETTER
void FragTrap::setName() {}
void FragTrap::setHitsPoints(unsigned int point) { _hitsPoints = point; }
void FragTrap::setMaxHitsPoint() {}
void FragTrap::setEnergyPoint(unsigned int pointEnergy) { _energyPoint = pointEnergy; }
void FragTrap::setMaxEnergyPoint() {}
void FragTrap::setLevel() {}
void FragTrap::setMeleeAttackDamage() {}
void FragTrap::setRangedAttackDamage() {}
void FragTrap::setArmorDamageReduction() {}
void FragTrap::setRandomAttackDamage() {}

//GETTER
std::string FragTrap::getName() const { return _name; }
unsigned int FragTrap::getHitsPoints() const { return _hitsPoints; }
unsigned int FragTrap::getMaxHitsPoint() const { return _maxHitsPoint; }
unsigned int FragTrap::getEnergyPoint() const { return _energyPoint; }
unsigned int FragTrap::getMaxEnergyPoint() const { return _maxHitsPoint; }
unsigned int FragTrap::getLevel() const { return _level; }
unsigned int FragTrap::getMeleeAttackDamage() const { return _meleeAttackDamage; }
unsigned int FragTrap::getRangedAttackDamage() const { return _rangedAttackDamage; }
unsigned int FragTrap::getArmorDamageReduction() const { return _armorDamageReduction; }
unsigned int FragTrap::getRandomAttackDamage() const { return _randomAttackDamage; }