/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:01:42 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:13:57 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

//CONSTRUCTEUR / DESTRUCTEUR
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << BOLDGREEN << "Create new Object ScavTrap with name: " << _name << RESET << std::endl;

}
ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
    std::cout << BOLDYELLOW << "Assignation ScavTrap operator called" << std::endl;
    _hitsPoints = f._hitsPoints;
    _maxHitsPoint = f._maxEnergyPoint;
    _energyPoint = f._energyPoint;
    _level = f._level;
    _meleeAttackDamage = f._meleeAttackDamage;
    _rangedAttackDamage = f._rangedAttackDamage;
    _armorDamageReduction = f._armorDamageReduction;
    _name = f._name;

    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
    
}

ScavTrap::~ScavTrap(){std::cout << BOLDRED << "Destroy Object ScavTrap with name: " << _name << RESET << std::endl;}

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


//CHALLENGE METHODS
void ScavTrap::iceBucket(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " on Ice bucket challenge " << RESET << std::endl;}
void ScavTrap::RussianRoulette(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " Russian Roulette challenge"  << RESET << std::endl;}
void ScavTrap::BingeDrinkin(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " binge-drinking challenge " <<  RESET << std::endl;}
void ScavTrap::dwarfThrow(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " dwarf throw challenge " <<  RESET << std::endl;}
void ScavTrap::jaming(std::string const &target){std::cout << MAGENTA << "FR4G-TP " << _name << " challenge " << target << " Jaming challenge "  << RESET << std::endl;}

