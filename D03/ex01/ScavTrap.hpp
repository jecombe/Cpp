/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:02:32 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:36:57 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "FragTrap.hpp"

//Class FragTrap
class ScavTrap
{
public:
    //Constructor / Destructor
    ScavTrap(std::string name);
    ~ScavTrap();

    //Methods
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const &target);
    
    //Attack
    void attackAcid(std::string const &target);
    void attackFire(std::string const &target);
    void attackWater(std::string const &target);
    void attackGas(std::string const &target);
    void attackNuclear(std::string const &target);

    //Chalenge
    void jaming(std::string const &target);
    void dwarfThrow(std::string const &target);
    void BingeDrinkin(std::string const &target);
    void RussianRoulette(std::string const &target);
    void iceBucket(std::string const &target);
    //Setter
    void setName();
    void setHitsPoints(unsigned int point);
    void setMaxHitsPoint();
    void setEnergyPoint(unsigned int pointEnergy);
    void setMaxEnergyPoint();
    void setLevel();
    void setMeleeAttackDamage();
    void setRangedAttackDamage();
    void setArmorDamageReduction();

    //Function operator
    ScavTrap & operator=(ScavTrap const &f);

    //Getter
    std::string getName() const;
    unsigned int getHitsPoints() const;
    unsigned int getMaxHitsPoint() const;
    unsigned int getEnergyPoint() const;
    unsigned int getMaxEnergyPoint() const;
    unsigned int getLevel() const;
    unsigned int getMeleeAttackDamage() const;
    unsigned int getRangedAttackDamage() const;
    unsigned int getArmorDamageReduction() const;

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