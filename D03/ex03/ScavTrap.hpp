/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:02:32 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 20:34:11 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
//Class FragTrap
class ScavTrap : public ClapTrap 
{
public:
    //Constructor / Destructor
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &s);
    ~ScavTrap();

    //Methods
    void challengeNewcomer(std::string const &target);
    
  
    //Chalenge
    void jaming(std::string const &target);
    void dwarfThrow(std::string const &target);
    void BingeDrinkin(std::string const &target);
    void RussianRoulette(std::string const &target);
    void iceBucket(std::string const &target);
  

    //Function operator
    ScavTrap & operator=(ScavTrap const &f);

    //Getter


private:
    //Attribut
    std::string _name;
    unsigned int _hitsPoints;
    unsigned int _maxHitsPoint;
    unsigned int _energyPoint;
    unsigned int _maxEnergyPoint;
    unsigned int _level;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;

};

#endif