/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:01:42 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:43:27 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "ScavTrap.hpp"

//CONSTRUCTEUR / DESTRUCTEUR
ScavTrap::ScavTrap(std::string name) : _name(name)
{
    std::cout << BOLDGREEN << "Create new Object ScavTrap with name: " << _name << RESET << std::endl;
    _hitsPoints = 100;
    _maxHitsPoint = 100;
    _energyPoint = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
    std::cout << BOLDYELLOW << "Assignation ScavTrap operator called" << std::endl;
    _hitsPoints = f.getHitsPoints();
    _maxHitsPoint = f.getMaxHitsPoint();
    _energyPoint = f.getEnergyPoint();
    _level = f.getLevel();
    _meleeAttackDamage = f.getMeleeAttackDamage();
    _rangedAttackDamage = f.getRangedAttackDamage();
    _armorDamageReduction = f.getArmorDamageReduction();
    _name = f.getName();

    return *this;
}

ScavTrap::~ScavTrap(){std::cout << BOLDRED << "Destroy Object ScavTrap with name: " << _name << RESET << std::endl;}


//METHODS DEFAULT
void ScavTrap::rangedAttack(std::string const &target){std::cout << BLUE << "FR4G-TP " << _name << " attack " << target << " at range, causing " << _rangedAttackDamage << RESET << std::endl;}

void ScavTrap::meleeAttack(std::string const &target){std::cout << CYAN << "FR4G-TP " << _name << " attack " << target << " at melee, causing " << _rangedAttackDamage << RESET << std::endl;}

void ScavTrap::takeDamage(unsigned int amount)
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
    std::cout << YELLOW << "You have " << _hitsPoints << "/" << _maxHitsPoint << RESET << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint > amount)
    {
        setEnergyPoint(_energyPoint - amount);
        setHitsPoints(amount + _hitsPoints);
        std::cout << GREEN << "FR4G-TP Be Repaired" << _name << RESET << std::endl;
    }
    else
        std::cout << GREEN << "Can't be repaired" << _name << RESET << std::endl;
    std::cout << YELLOW << "You have " << _energyPoint << "/" << _maxEnergyPoint << RESET << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
     static std::string challengeRandom[] = 
     {
         "Ice bucket challenge",
         "Russian Roulette challenge",
         "binge-drinking challenge",
         "dwarf throw challenge",
         "Jaming challenge"
     };
      srand(time(nullptr));
        int fctRandom = rand() % 5;

        if (fctRandom == 0)
            ScavTrap::iceBucket(target);
        else if (fctRandom == 1)
            ScavTrap::RussianRoulette(target);
        else if (fctRandom == 2)
            ScavTrap::BingeDrinkin(target);
        else if (fctRandom == 3)
            ScavTrap::dwarfThrow(target);
        else
            ScavTrap::jaming(target);

}


//ATTACK METHODS
void ScavTrap::attackAcid(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with acid attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void ScavTrap::attackFire(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with fire attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void ScavTrap::attackWater(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with water attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void ScavTrap::attackGas(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with gas attack, causing " << _rangedAttackDamage << RESET << std::endl;}
void ScavTrap::attackNuclear(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " attack " << target << " with nuclear attack, causing " << _rangedAttackDamage << RESET << std::endl;}

//CHALLENGE METHODS
void ScavTrap::iceBucket(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " on Ice bucket challenge " << RESET << std::endl;}
void ScavTrap::RussianRoulette(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " Russian Roulette challenge"  << RESET << std::endl;}
void ScavTrap::BingeDrinkin(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " binge-drinking challenge " <<  RESET << std::endl;}
void ScavTrap::dwarfThrow(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " dwarf throw challenge " <<  RESET << std::endl;}
void ScavTrap::jaming(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " Jaming challenge "  << RESET << std::endl;}

//SETTER METHODS
void ScavTrap::setName() {}
void ScavTrap::setHitsPoints(unsigned int point) { _hitsPoints = point; }
void ScavTrap::setMaxHitsPoint() {}
void ScavTrap::setEnergyPoint(unsigned int pointEnergy) { _energyPoint = pointEnergy; }
void ScavTrap::setMaxEnergyPoint() {}
void ScavTrap::setLevel() {}
void ScavTrap::setMeleeAttackDamage() {}
void ScavTrap::setRangedAttackDamage() {}
void ScavTrap::setArmorDamageReduction() {}


//GETTER METHODS
std::string ScavTrap::getName() const { return _name; }
unsigned int ScavTrap::getHitsPoints() const { return _hitsPoints; }
unsigned int ScavTrap::getMaxHitsPoint() const { return _maxHitsPoint; }
unsigned int ScavTrap::getEnergyPoint() const { return _energyPoint; }
unsigned int ScavTrap::getMaxEnergyPoint() const { return _maxHitsPoint; }
unsigned int ScavTrap::getLevel() const { return _level; }
unsigned int ScavTrap::getMeleeAttackDamage() const { return _meleeAttackDamage; }
unsigned int ScavTrap::getRangedAttackDamage() const { return _rangedAttackDamage; }
unsigned int ScavTrap::getArmorDamageReduction() const { return _armorDamageReduction; }
