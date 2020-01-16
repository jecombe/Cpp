/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 18:01:56 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:01:57 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

//Librairie
#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>

//Color 
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */

//Class FragTrap
class FragTrap
{
public:
    //Constructor / Destructor
    FragTrap(std::string name);
    ~FragTrap();

    //Methods
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
    
    //Attack
    void attackAcid(std::string const &target);
    void attackFire(std::string const &target);
    void attackWater(std::string const &target);
    void attackGas(std::string const &target);
    void attackNuclear(std::string const &target);

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
    void setRandomAttackDamage();

    //Function operator
    FragTrap & operator=(FragTrap const &f);



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
    unsigned int getRandomAttackDamage() const;

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
    unsigned int  _randomAttackDamage;

};

#endif